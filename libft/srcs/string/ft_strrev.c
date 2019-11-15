/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:45:30 by mkhoza            #+#    #+#             */
/*   Updated: 2019/09/12 14:49:01 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	*rev;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(str);
	if (!(rev = ft_strnew(len)))
		return (NULL);
	while (i < len)
		rev[i++] = str[len];
	free(str);
	return (rev);
}
