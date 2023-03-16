/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:37:41 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/16 15:36:43 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stacks(t_push_swap *data)
{
	int	i;

	i = 0;
	ft_printf("Stack A (%i): ", data->stack_a_size);
	while (i < data->stack_a_size)
	{
		ft_printf("%i ", data->stack_a[i]);
		i++;
	}
	ft_printf("\nStack B (%i): ", data->stack_b_size);
	i = 0;
	while (i < data->stack_b_size)
	{
		ft_printf("%i ", data->stack_b[i]);
		i++;
	}
	ft_printf("\n");
}

void	run_algorithm(t_push_swap *data)
{
	if (is_a_sorted)
		ft_printf("Stack A is sorted!\n");
}

int	main(int ac, char **av)
{
	t_push_swap	*data;

	data = malloc(sizeof(t_push_swap));
	// handle malloc fail
	// check validity: some arguments are bigger than an integer
	is_valid_input(ac, av);
	read_args(data, ac, av);
	ft_printf("Passed validity checks\n");
	print_stacks(data);
	run_algorithm(data);
	print_stacks(data);
	return (0);
}
