/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_octal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:23:25 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/04 09:39:53 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_convert_octal(unsigned long int nb)
{
	char	print[22];
	int		i;

	i = 0;
	ft_bzero(print, 22);
	if (nb == 0)
		i++;
	while (nb != 0)
	{
		print[i++] = (nb % 8) + 48;
		nb /= 8;
	}
	print[i] = '\0';
	return (ft_strrev(print));
}
