/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:16:58 by mkhoza            #+#    #+#             */
/*   Updated: 2019/09/12 14:21:07 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *str, int c, size_t n)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)str;
	while (n--)
	{
		if (ptr[i] == c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
