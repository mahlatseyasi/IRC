/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:24:15 by mkhoza            #+#    #+#             */
/*   Updated: 2019/09/12 14:25:45 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	create_string(double nb, char *rest, int i)
{
	int		afterdots;
	int		dot;

	dot = 0;
	afterdots = 0;
	if (nb < 1)
	{
		rest[i++] = '.';
		dot = i;
		while (afterdots < 6)
		{
			nb *= 10;
			if (((int)(nb + 0.000001)) != 10)
				rest[i++] = (int)(nb + 48 + 0.000001);
			nb -= (int)nb;
			afterdots++;
		}
	}
	while (i - dot < 6)
		rest[i++] = '0';
	rest[i] = '\0';
}

char	*ft_ftoa(double n)
{
	char		*flt;
	char		*first;
	long int	nb;
	int			i;

	i = -1;
	nb = (long int)n;
	first = ft_itoa(nb);
	flt = (char *)malloc(100);
	n -= (double)nb;
	if (n < 0)
		n *= -1;
	while (first[++i])
		flt[i] = first[i];
	create_string(n, flt, i);
	free(first);
	return (flt);
}
