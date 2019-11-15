/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_chr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:39:41 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/04 16:03:52 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_chr(char *src, char c)
{
	char	*dest;
	int		len;

	len = 0;
	while (src[len] != '\0' && src[len] != c)
		len++;
	if (!(dest = ft_strnew(len)))
		return (NULL);
	dest = ft_strncpy(src, len);
	return (dest);
}
