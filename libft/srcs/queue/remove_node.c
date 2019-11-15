/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:29:08 by mkhoza            #+#    #+#             */
/*   Updated: 2019/09/12 14:30:09 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	remove_node(t_queue **queue, t_node *prev, t_node *remove)
{
	if (!prev)
		(*queue)->first = remove->next;
	else
		prev->next = remove->next;
}
