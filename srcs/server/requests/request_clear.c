/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   request_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:22:01 by mkhoza            #+#    #+#             */
/*   Updated: 2019/09/12 15:25:44 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "irc.h"

void	request_clear(int fd, char *msg)
{
	int save_stdout;

	save_stdout = dup(1);
	dup2(fd, 1);
	system("clear");
	dup2(save_stdout, 1);
	close(save_stdout);
}
