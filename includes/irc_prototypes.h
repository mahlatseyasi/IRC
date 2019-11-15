/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   irc_prototypes.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 13:45:51 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/04 13:08:01 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IRC_PROTOTYPES_H
# define IRC_PROTOTYPES_H

# include "irc.h"

typedef struct s_client	t_client;
int				send_message_to_server(int sockfd);
int				recv_message_from_server(int sockfd);

static int		init_client_socket(int port, char *address);
static int		run_client(int sockfd, int max_fd, fd_set client_fds);
void			new_client(void);
void			client_quit(int clientfd);

void			free_client(void *client);

t_client		*init_client(int sockfd, char *nick);
int				init_server(void);
int				init_server_socket(int port);

void			notify_channel_join(int	fd, char *channel);
void			notify_channel_leave(int fd, char *channel);

int				process_request(int clientfd, char *msg);
void			process_data(int clientfd);

void			send_system_message(int clientfd, char *msg);
void			send_welcome_message(int clientfd);
int				send_message(int clientfd, char *msg);

static int		run_server(void);
void			request_channel_join(int fd, char *msg);
void			request_channel_leave(int fd, char *msg);
void			request_channel_who(int fd, char *msg);
void			request_clear(int fd, char *msg);
void			request_colors_list(int fd, char *msg);
void			request_color(int fd, char *msg);
void			request_fd(int fd, char *msg);
void			request_msg(int fd, char *msg);
void			request_nick(int fd, char *msg);

void			skip_request_token(int *i, char *msg);

int				parse_args_serv(int ac, char **av);
int				parse_args_client(int ac, char **av);

int				error(int errnb, char *msg, bool ifexit);

#endif
