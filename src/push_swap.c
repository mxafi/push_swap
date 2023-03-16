/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:37:41 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/16 19:16:41 by malaakso         ###   ########.fr       */
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
	if (is_a_sorted(data))
		return ;
	else if (data->stack_a_size == 2)
		sort_two(data);
	else if (data->stack_a_size == 3)
		sort_three(data);
	else
	{
		if (is_a_sorted(data))
			ft_printf("Stack A is sorted!\n");
		else
			ft_printf("Stack A is NOT sorted! :(\n");
	}
}

int	main(int ac, char **av)
{
	t_push_swap	*data;

	// implement handling of a single string argument
	// implement check for string of just spaces, it has to Error
	data = malloc(sizeof(t_push_swap));
	// handle malloc fail
	// check validity: some arguments are bigger than an integer
	is_valid_input(ac, av);
	read_args(data, ac, av);
	//ft_printf("Passed validity checks\n");
	//print_stacks(data);
	run_algorithm(data);
	//print_stacks(data);
	return (0);
}
