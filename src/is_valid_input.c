/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:52:29 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/18 14:59:38 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_valid_integer(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	contains_no_duplicates(int size, char **word_list)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_atoi(word_list[i]) == ft_atoi(word_list[j]))
				error(1);
			j++;
		}
		i++;
	}
	return (1);
}

int	contains_only_integers(int ignore_first_n, int size, char **word_list)
{
	int	i;

	i = ignore_first_n;
	while (i < size)
	{
		if (!is_valid_integer(word_list[i]))
			error(1);
		i++;
	}
	return (1);
}

int	is_valid_input(int ac, char **av)
{
	if (ac == 1)
		error(0);
	if (!contains_only_integers(1, ac, av))
		error(1);
	if (!contains_no_duplicates(ac, av))
		error(1);
	return (1);
}
