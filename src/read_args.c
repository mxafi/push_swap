/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:29:41 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/18 18:11:15 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	single_arg(t_push_swap *data, char **av)
{
	char	**word_list;
	int		word_list_len;
	int		i;

	word_list = ft_split(av[1], ' ');
	if (!word_list)
		error(1);
	word_list_len = grid_len(word_list);
	data->stack_a_size = word_list_len;
	data->stack_a = malloc(sizeof(int) * (word_list_len));
	if (!data->stack_a)
		error(1);
	data->stack_b = malloc(sizeof(int) * (word_list_len));
	if (!data->stack_b)
	{
		free (data->stack_a);
		error (1);
	}
	i = 0;
	while (i < word_list_len)
	{
		data->stack_a[i] = ft_atoi(word_list[i]);
		i++;
	}
	destroy_grid(word_list);
}

static void	multi_arg(t_push_swap *data, int ac, char **av)
{
	int	i;

	data->stack_a_size = ac - 1;
	data->stack_a = malloc(sizeof(int) * (ac - 1));
	if (!data->stack_a)
		error(1);
	data->stack_b = malloc(sizeof(int) * (ac - 1));
	if (!data->stack_b)
	{
		free (data->stack_a);
		error (1);
	}
	i = 1;
	while (i < ac)
	{
		data->stack_a[i - 1] = ft_atoi(av[i]);
		i++;
	}
}

void	read_args(t_push_swap *data, int ac, char **av)
{
	data->stack_b_size = 0;
	if (ac == 2)
		single_arg(data, av);
	else
		multi_arg(data, ac, av);
}
