/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   notify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:12:22 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/04 15:52:00 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "irc.h"

void		notify_channel_join(int fd, char *channel)
{
	t_client	*peer;
	t_node		*node;

	node = g_server.clients;
	ft_strcpy(g_server.buff, "User \"");
	ft_strcat(g_server.buff, g_clients[fd]->nick);
	ft_strcat(g_server.buff, "\" joined channel.\n");
	while (node)
	{
		peer = node->data;
		if (peer && peer->fd != fd && !ft_strcmp(peer->channel, channel))
			send_system_message(peer->fd, ft_strdup(g_server.buff));
		node = node->next;
	}
}

void		notify_channel_leave(int fd, char *channel)
{
	t_node		*node;
	t_client	*peer;

	node = g_server.clients;
	ft_strcpy(g_server.buff, "User \"");
	ft_strcat(g_server.buff, g_clients[fd]->nick);
	ft_strcat(g_server.buff, "\" left channel.\n");
	while (node)
	{
		peer = node->data;
		if (peer && peer->fd != fd && !ft_strcmp(peer->channel, channel))
			send_system_message(peer->fd, ft_strdup(g_server.buff));
		node = node->next;
	}
}
