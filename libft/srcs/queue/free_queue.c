/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_queue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:26:53 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/04 16:10:41 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_queue(t_queue *queue, void (*fct_free)(void *))
{
	t_node	*tmp;
	t_node	*next;

	if (!queue)
		return ;
	tmp = queue->first;
	while (tmp)
	{
		next = tmp->next;
		if (fct_free)
			fct_free(tmp->data);
		free(tmp);
		tmp = next;
	}
}
