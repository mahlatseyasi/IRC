/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:22:07 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/04 09:39:23 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long	ft_atoi(char *s)
{
	long long	nb;
	int			i;

	i = 0;
	nb = 0;
	while ((*s == ' ' || *s == '\n' || *s == '\t') && *s != '\0')
		s++;
	s[i] == '-' || s[i] == '+' ? i++ : i;
	while (s[i] > 47 && s[i] < 58)
	{
		nb *= 10;
		nb += s[i++] - 48;
	}
	nb = s[0] == '-' ? nb * -1 : nb;
	return (nb);
}
