/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:37:36 by mkhoza            #+#    #+#             */
/*   Updated: 2019/09/16 11:37:45 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_list(t_node *list)
{
	int		i;
	t_node	*tmp;

	i = 1;
	tmp = list;
	printf("\nLIST:\n");
	while (tmp)
	{
		printf("%d. p:[%p], pdata:[%d]\n", i++, tmp, tmp->data);
		tmp = tmp->next;
	}
	printf("\n");
}
