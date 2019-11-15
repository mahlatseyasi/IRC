/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:33:24 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/04 16:03:07 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, char to_find)
{
	int i;

	i = 0;
	while (str[i] && str[i] != to_find)
		i++;
	if (str[i] == to_find)
		return (&str[i]);
	return (NULL);
}
