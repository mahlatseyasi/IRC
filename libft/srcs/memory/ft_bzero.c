/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:16:02 by mkhoza            #+#    #+#             */
/*   Updated: 2019/09/12 14:21:07 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, unsigned int n)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = str;
	while (n--)
		ptr[i++] = '\0';
}
