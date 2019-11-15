/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_send_message.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:14:23 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/04 15:40:09 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "irc.h"

void	send_system_message(int clientfd, char *msg)
{
	ft_strcpy(g_server.buff, GREY);
	ft_strcat(g_server.buff, GREY);
	ft_strcat(g_server.buff, msg);
	ft_strcat(g_server.buff, NORMAL);
	ft_strcat(g_server.buff, NORMAL);
	if (send(clientfd, g_server.buff, ft_strlen(g_server.buff), 0) == -1)
		error(0, "Send", false);
	free(msg);
}

void	send_welcome_message(int clientfd)
{
	ft_strcpy(g_server.buff, "\nWelcome ");
	ft_strcat(g_server.buff, g_clients[clientfd]->color);
	ft_strcat(g_server.buff, g_clients[clientfd]->nick);
	ft_strcat(g_server.buff, GREY);
	ft_strcat(g_server.buff, "!\n");
	ft_strcat(g_server.buff, "Following commands are available:\n");
	ft_strcat(g_server.buff, " -> /join <channel_name>\n");
	ft_strcat(g_server.buff, " -> /leave <channel_name>\n");
	ft_strcat(g_server.buff, " -> /who\n");
	ft_strcat(g_server.buff, " -> /color <color>\n");
	ft_strcat(g_server.buff, " -> /nick <nickname>\n");
	ft_strcat(g_server.buff, " -> /msg <nick> <message>\n");
	ft_strcat(g_server.buff, " -> /clear\n");
	ft_strcat(g_server.buff, " -> /fd\n\n");
	send_system_message(clientfd, ft_strdup(g_server.buff));
}

int		send_message(int clientfd, char *msg)
{
	int			i;
	t_node		*node;
	t_client	*peer;

	node = g_server.clients;
	while (node)
	{
		peer = node->data;
		if (peer && !ft_strcmp(peer->channel, g_clients[clientfd]->channel))
		{
			ft_strcpy(g_server.buff, g_clients[clientfd]->nick);
			ft_strcat(g_server.buff, ": ");
			ft_strcat(g_server.buff, g_clients[clientfd]->color);
			ft_strcat(g_server.buff, msg);
			ft_strcat(g_server.buff, NORMAL);
			ft_strcat(g_server.buff, "\n");
			if (send(peer->fd, g_server.buff,
			ft_strlen(g_server.buff), 0) == -1)
				return (EXIT_FAILURE);
		}
		node = node->next;
	}
	return (EXIT_SUCCESS);
}
