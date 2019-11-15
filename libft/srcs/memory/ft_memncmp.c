/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:18:47 by mkhoza            #+#    #+#             */
/*   Updated: 2019/09/12 14:21:07 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memncmp(void *s1, void *s2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n--)
	{
		if (*ptr != *ptr2)
			return ((unsigned char)*ptr - (unsigned char)*ptr2);
		ptr++;
		ptr2++;
	}
	return (0);
}
