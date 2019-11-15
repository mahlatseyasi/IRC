/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:14:21 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/05 10:29:48 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_remove_list(t_node **list, void *data)
{
	t_node	*tmp;
	t_node	*prev;

	tmp = *list;
	prev = NULL;
	while (tmp)
	{
		if (tmp->data == data)
		{
			if (prev == NULL)
				*list = tmp->next;
			else
			{
				prev->next = tmp->next;
				free(tmp);
			}
			return ;
		}
		prev = tmp;
		tmp = tmp->next;
	}
}
