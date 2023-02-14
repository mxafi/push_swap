/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:52:29 by malaakso          #+#    #+#             */
/*   Updated: 2023/02/14 20:14:42 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_valid_integer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	is_valid_input(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 1)
		error(0);
	i = 1;
	while (i < ac)
	{
		if (!is_valid_integer(av[i]))
			error(1);
		i++;
	}
	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (av[i] == av[j])
				error (1);
			j++;
		}
		i++;
	}
	return (1);
}
