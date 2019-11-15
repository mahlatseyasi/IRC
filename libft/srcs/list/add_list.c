/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:11:13 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/05 10:29:27 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_add_list(t_node **list, void *data)
{
	t_node *tmp;

	tmp = *list;
	if (!tmp)
	{
		*list = ft_init_node(data, sizeof(data));
		return (EXIT_SUCCESS);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = ft_init_node(data, sizeof(data));
	return (EXIT_SUCCESS);
}
