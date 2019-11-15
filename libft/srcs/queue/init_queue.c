/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_queue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:27:47 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/04 16:07:33 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_queue		*ft_init_queue(void)
{
	t_queue *queue;

	if (!(queue = ft_memalloc(sizeof(t_queue))))
		return (NULL);
	queue->first = NULL;
	queue->last = NULL;
	return (queue);
}
