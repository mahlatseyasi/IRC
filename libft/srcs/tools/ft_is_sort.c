/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:50:25 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/04 09:22:05 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_sort(int *array, int length, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i < length - 1)
	{
		if (f(array[i], array[i + 1]) > 0)
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}
