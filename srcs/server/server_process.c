/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_process.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:14:01 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/04 14:00:35 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "irc.h"

t_request	g_requests[] =
{
	{"/join ", 6, request_channel_join},
	{"/leave", 6, request_channel_leave},
	{"/who", 4, request_channel_who},
	{"/color ", 7, request_color},
	{"/nick ", 6, request_nick},
	{"/msg ", 5, request_msg},
	{"/fd", 3, request_fd},
	{"/clear", 6, request_clear},
	{"/rainbow", 8, request_colors_list},
	{NULL, 0, NULL}
};

int		process_request(int clientfd, char *msg)
{
	int i;

	i = 0;
	while (g_requests[i].request)
	{
		if (!ft_strncmp(msg, g_requests[i].request, g_requests[i].len))
		{
			g_requests[i].fct(clientfd, msg);
			return (EXIT_SUCCESS);
		}
		i++;
	}
	return (EXIT_FAILURE);
}

void	process_data(int clientfd)
{
	int		ret;
	char	buff[BUFF_SIZE];

	ft_bzero(buff, BUFF_SIZE);
	if ((ret = recv(clientfd, buff, BUFF_SIZE, 0)) > 0)
	{
		if (process_request(clientfd, buff) == EXIT_SUCCESS)
			return ;
		if (send_message(clientfd, buff) == EXIT_FAILURE)
			error(0, "Send", false);
	}
	else
	{
		if (ret < 0)
			error(0, "Recv", false);
		client_quit(clientfd);
	}
}
