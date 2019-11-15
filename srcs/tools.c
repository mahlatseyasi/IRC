/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:07:24 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/04 13:11:59 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "irc.h"

int		error(int errnb, char *msg, bool ifexit)
{
	if (errnb == 1)
		printf("Usage: server <port number>\n");
	else if (errnb == 2)
		printf("Port number has to be between 1024 and 65535!\n");
	else if (errnb == 3)
		printf("Usage: server <port number> <server addres>\n");
	else
		printf("%s%s: %s%s\n", RED, msg, strerror(errno), NORMAL);
	return (ifexit == true ? EXIT_FAILURE : EXIT_SUCCESS);
}
