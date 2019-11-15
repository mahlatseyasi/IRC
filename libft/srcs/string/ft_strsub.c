/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:47:21 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/04 16:04:10 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char *str, int start, size_t len)
{
	char	*new;
	int		i;

	if (!str || !(new = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (len--)
		new[i++] = str[start++];
	return (new);
}
