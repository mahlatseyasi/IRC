/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   irc.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 13:45:25 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/05 10:43:19 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IRC_H
# define IRC_H

# include <unistd.h>
# include <stdio.h>
# include <sys/socket.h>
# include <netinet/in.h>
# include <netdb.h>
# include <arpa/inet.h>
# include <string.h>
# include <stdbool.h>
# include <sys/time.h>
# include <errno.h>
# include <term.h>
# include <curses.h>
# include "libft.h"

# include "irc_prototypes.h"

# define SERVPASSWD		"polcia"
# define DEF_COLOR		CYAN
# define BUFF_SIZE		2048
# define SERV_BUFF_SIZE	2048

typedef struct	s_client
{
	int		fd;
	char	*color;
	char	*nick;
	char	*channel;
}				t_client;

typedef struct	s_server
{
	int		serverfd;
	int		max_fd;
	char	*buff;
	t_node	*clients;
	t_node	*channels;
	fd_set	client_fds;
}				t_server;

typedef struct	s_request
{
	char	*request;
	int		len;
	void	(*fct)(int, char *);
}				t_request;

typedef struct	s_color
{
	char	*color;
	char	*value;
}				t_color;

extern t_client *g_clients[FD_SETSIZE];
extern t_server	g_server;

#endif
