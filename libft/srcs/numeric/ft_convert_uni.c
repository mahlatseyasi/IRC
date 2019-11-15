/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_uni.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:23:55 by mkhoza            #+#    #+#             */
/*   Updated: 2019/09/12 14:25:45 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_convert_uni(wchar_t wide)
{
	char *new;

	new = ft_strnew(5);
	if (wide < 0x80)
		new[0] = ((wide >> 0) & 0x7F) | 0x00;
	else if (wide < 0x800)
	{
		new[0] = ((wide >> 6) & 0x1F) | 0xC0;
		new[1] = ((wide >> 0) & 0x3F) | 0x80;
	}
	else if (wide < 0x10000)
	{
		new[0] = ((wide >> 12) & 0x0F) | 0xE0;
		new[1] = ((wide >> 6) & 0x3F) | 0x80;
		new[2] = ((wide >> 0) & 0x3F) | 0x80;
	}
	else if (wide < 0x10FFFF)
	{
		new[0] = ((wide >> 18) & 0x07) | 0xF0;
		new[1] = ((wide >> 12) & 0x3F) | 0x80;
		new[2] = ((wide >> 6) & 0x3F) | 0x80;
		new[3] = ((wide >> 0) & 0x3F) | 0x80;
	}
	return (new);
}
