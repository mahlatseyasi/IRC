/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:12:51 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/05 10:29:04 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_list(t_node **list, void (*fct_free)(void *))
{
	t_node *tmp;

	tmp = *list;
	while (tmp)
	{
		tmp = tmp->next;
		if (fct_free)
			fct_free(tmp->data);
		free(tmp);
		*list = tmp;
	}
}
