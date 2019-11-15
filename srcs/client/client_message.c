/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_message.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:09:04 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/04 14:28:57 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "irc.h"

int		send_message_to_server(int sockfd)
{
	char		*sendbuff;

	gnl(1, &sendbuff);
	if (send(sockfd, sendbuff, ft_strlen(sendbuff), 0) == -1)
		return (error(0, "Send", true));
	free(sendbuff);
	return (EXIT_SUCCESS);
}

int		recv_message_from_server(int sockfd)
{
	char		getbuff[BUFF_SIZE];
	int			ret;

	ft_bzero(getbuff, BUFF_SIZE);
	if ((ret = recv(sockfd, getbuff, BUFF_SIZE, 0)) < 1)
	{
		printf("Server quit, try again later!\n");
		return (EXIT_FAILURE);
	}
	ft_putstr(getbuff);
	return (EXIT_SUCCESS);
}
