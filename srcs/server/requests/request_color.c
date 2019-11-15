/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   request_color.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:22:50 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/04 13:19:53 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "irc.h"

static t_color g_colors[] =
{
	{"blue", BLUE},
	{"cyan", CYAN},
	{"green", GREEN},
	{"yellow", YELLOW},
	{"orange", ORANGE},
	{"red", RED},
	{"pink", PINK},
	{"magneta", MAGNETA},
	{"purple", PURPLE},
	{"white", WHITE},
	{NULL, NULL}
};

void	request_colors_list(int fd, char *msg)
{
	int itable;

	itable = 0;
	ft_strcpy(g_server.buff, "Following colors are available:\n");
	while (g_colors[itable].color)
	{
		ft_strcat(g_server.buff, " -> ");
		ft_strcat(g_server.buff, g_colors[itable].value);
		ft_strcat(g_server.buff, g_colors[itable].color);
		ft_strcat(g_server.buff, GREY);
		ft_strcat(g_server.buff, "\n");
		itable++;
	}
	send_system_message(fd, ft_strdup(g_server.buff));
}

void	request_color(int fd, char *msg)
{
	int i;
	int	itable;

	i = 0;
	itable = 0;
	while (msg[i] && !IS_WHITE(msg[i]))
		i++;
	while (msg[i] && IS_WHITE(msg[i]))
		i++;
	while (g_colors[itable].color)
	{
		if (!ft_strcmp(g_colors[itable].color, &(msg[i])))
		{
			ft_strcpy(g_server.buff, g_clients[fd]->color);
			ft_strcat(g_server.buff, "Current color ");
			ft_strcat(g_server.buff, GREY);
			ft_strcat(g_server.buff, "has been changed to ");
			ft_strcat(g_server.buff, g_colors[itable].value);
			ft_strcat(g_server.buff, "requested color.\n");
			send_system_message(fd, ft_strdup(g_server.buff));
			g_clients[fd]->color = g_colors[itable].value;
			return ;
		}
		itable++;
	}
}
