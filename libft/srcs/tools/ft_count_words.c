/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 14:50:02 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/04 09:22:33 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_words(char *str)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'))
			i++;
		if (str[i])
			words += 1;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\v')
			i++;
	}
	return (words);
}
