/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:10:57 by mkhoza            #+#    #+#             */
/*   Updated: 2019/09/12 15:11:06 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "irc.h"

void	free_client(void *client)
{
	free(((t_client *)client)->nick);
	free(((t_client *)client)->channel);
	free(client);
}
