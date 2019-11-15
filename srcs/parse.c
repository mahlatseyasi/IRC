/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhoza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:06:59 by mkhoza            #+#    #+#             */
/*   Updated: 2019/11/04 15:48:34 by mkhoza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "irc.h"

int		parse_args_serv(int ac, char **av)
{
	if (ac != 2)
		error(1, NULL, true);
	if (ft_atoi(av[1]) > 65535 || ft_atoi(av[1]) < 1024)
		return (error(2, NULL, true));
	return (EXIT_SUCCESS);
}

int		parse_args_client(int ac, char **av)
{
	if (ac != 3)
		return (error(3, NULL, true));
	if (ft_atoi(av[1]) > 65535 || ft_atoi(av[1]) < 1024)
		return (error(2, NULL, true));
	return (EXIT_SUCCESS);
}
