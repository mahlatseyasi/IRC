/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:18:16 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/05 10:31:50 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memdup(void *src, int size)
{
	void	*dest;

	if (!src || !(dest = ft_memalloc(size)))
		return (NULL);
	ft_memcpy(dest, src, size);
	return (dest);
}
