/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:27:18 by mkhoza            #+#    #+#             */
/*   Updated: 2019/09/12 14:30:09 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node		*ft_init_node(void *data, size_t dsize)
{
	t_node	*new;

	if (!(new = ft_memalloc(sizeof(t_node))))
		return (NULL);
	new->data = data;
	new->d_size = dsize;
	new->next = NULL;
	return (new);
}
