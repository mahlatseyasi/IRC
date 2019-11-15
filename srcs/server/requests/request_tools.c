/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   request_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:25:00 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/04 13:47:57 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "irc.h"

void	skip_request_token(int *i, char *msg)
{
	*i = 0;
	while (msg[*i] && IS_WHITE(msg[*i]))
		(*i)++;
	while (msg[*i] && !IS_WHITE(msg[*i]))
		(*i)++;
	while (msg[*i] && IS_WHITE(msg[*i]))
		(*i)++;
}
