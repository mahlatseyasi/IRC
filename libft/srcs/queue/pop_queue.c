/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_queue.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:28:17 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/04 16:07:05 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_pop_queue(t_queue **queue)
{
	t_node *tmp;

	if (!(*queue) || !(*queue)->first)
		return (NULL);
	tmp = (*queue)->first;
	(*queue)->first = tmp->next;
	return (tmp);
}
