/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:46:57 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/04 09:28:36 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] && str[i++] == to_find[j++])
			;
		if (!to_find[j])
			return (EXIT_SUCCESS);
		if (str[i] == '\0')
			return (EXIT_FAILURE);
		i -= j - 1;
	}
	return (EXIT_FAILURE);
}
