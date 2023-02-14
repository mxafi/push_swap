/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 20:29:41 by malaakso          #+#    #+#             */
/*   Updated: 2023/02/14 21:07:17 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	read_args(t_push_swap *data, int ac, char **av)
{
	int	i;

	data->stack_b_size = 0;
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
