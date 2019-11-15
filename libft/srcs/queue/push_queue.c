/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_queue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:58:15 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/04 16:09:41 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_push_queue(t_queue **head, t_node *new)
{
	t_node	*tmp;

	if (!(*head) || !new)
		return ;
	tmp = (*head)->first;
	if (!tmp || !tmp->data)
	{
		new->next = tmp;
		(*head)->first = new;
		(*head)->last = new;
	}
	else if (!(tmp->next))
	{
		tmp->next = new;
		(*head)->last = new;
	}
	else
	{
		(*head)->last->next = new;
		(*head)->last = new;
	}
}
