/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   request_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:23:12 by mkhoza            #+#    #+#             */
/*   Updated: 2019/09/12 15:25:39 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "irc.h"

void	request_fd(int fd, char *msg)
{
	ft_bzero(g_server.buff, SERV_BUFF_SIZE);
	ft_strcpy(g_server.buff, ft_itoa(fd));
	ft_strcat(g_server.buff, "\n");
	if (send(fd, g_server.buff, ft_strlen(g_server.buff), 0) == -1)
		error(0, "Send", false);
}
