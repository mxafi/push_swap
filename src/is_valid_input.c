/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:52:29 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/18 17:50:24 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_inside_integer_range(char *str)
{
	long	val;

	if (!str)
		return (0);
	val = ft_atol(str);
	if ((val > INT_MAX) || (val < INT_MIN))
		return (0);
	return (1);
}

static int	is_valid_integer(char *str)
{
	int	i;

	if (!is_inside_integer_range(str))
		return (0);
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

static int	contains_no_duplicates(int ignore_first_n,
	int size, char **word_list)
{
	int	i;
	int	j;

	i = ignore_first_n;
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

static int	contains_only_integers(int ignore_first_n,
	int size, char **word_list)
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
	char	**word_list;
	int		word_list_len;

	if (ac == 1)
		error(0);
	if (ac == 2)
	{
		word_list = ft_split(av[1], ' ');
		if (!word_list)
			error(1);
		word_list_len = grid_len(word_list);
		if ((!contains_only_integers(0, word_list_len, word_list))
			|| (!contains_no_duplicates(0, word_list_len, word_list))
			|| (!word_list[0]))
		{
			destroy_grid(word_list);
			error(1);
		}
		destroy_grid(word_list);
		return (1);
	}
	if ((!contains_only_integers(1, ac, av))
		|| (!contains_no_duplicates(1, ac, av)))
		error(1);
	return (1);
}
