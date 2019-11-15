/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:17:56 by mkhoza            #+#    #+#             */
/*   Updated: 2019/09/12 14:21:07 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, unsigned int size)
{
	while (size--)
		((char *)dest)[size] = ((char *)src)[size];
	return (dest);
}
