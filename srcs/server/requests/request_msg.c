/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   request_msg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:23:28 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/05 10:40:20 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "irc.h"

static t_client	*get_receiver(int fd, char *msg)
{
	int			i;
	char		*nick;
	t_node		*node;
	t_client	*peer;

	skip_request_token(&i, msg);
	nick = ft_strdup(&(msg[i]));
	i = 0;
	while (!IS_WHITE(nick[i]))
		i++;
	nick[i] = '\0';
	peer = NULL;
	node = g_server.clients;
	while (node)
	{
		peer = node->data;
		if (peer && !ft_strcmp(peer->nick, nick))
			return (peer);
		node = node->next;
	}
	ft_strcat(ft_strcpy(g_server.buff, "User \""), nick);
	ft_strcat(g_server.buff, "\" is not connected.\n");
	send_system_message(fd, ft_strdup(g_server.buff));
	free(nick);
	return (NULL);
}

static char		*get_message(int fd, char *msg)
{
	int		i;

	skip_request_token(&i, msg);
	while (!IS_WHITE(msg[i]))
		i++;
	while (IS_WHITE(msg[i]))
		i++;
	if (msg[i])
		return (&(msg[i]));
	ft_strcpy(g_server.buff, "Usage: \"/msg <nick> <message>\".\n");
	send_system_message(fd, ft_strdup(g_server.buff));
	return (NULL);
}

void			request_msg(int fd, char *msg)
{
	t_client	*reciever;
	char		*message;

	if (!(reciever = get_receiver(fd, msg)) ||
		!(message = get_message(fd, msg)))
		return ;
	ft_strcpy(g_server.buff, MAROON);
	ft_strcat(g_server.buff, "~private message~ ");
	ft_strcat(g_server.buff, NORMAL);
	ft_strcat(g_server.buff, NORMAL);
	ft_strcat(g_server.buff, g_clients[fd]->nick);
	ft_strcat(g_server.buff, ": ");
	ft_strcat(g_server.buff, reciever->color);
	ft_strcat(g_server.buff, message);
	ft_strcat(g_server.buff, "\n");
	send_system_message(reciever->fd, ft_strdup(g_server.buff));
}
