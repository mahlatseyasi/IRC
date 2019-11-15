/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:43:38 by mkhoza            #+#    #+#             */
/*   Updated: 2019/09/12 14:49:01 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *str, int size)
{
	char	*new;
	int		i;

	i = 0;
	if (!(new = ft_strnew(size + 1)))
		return (NULL);
	while (i < size)
	{
		new[i] = str[i];
		i++;
	}
	return (new);
}
