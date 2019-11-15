/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:48:27 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/04 09:27:18 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wstrlen(wchar_t *ws)
{
	int	len;

	len = 0;
	while (ws[len])
	{
		if (ws[len] > 0xFF)
			return (EXIT_FAILURE);
		len++;
	}
	return (len);
}
