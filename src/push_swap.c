/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:37:41 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/23 17:09:05 by malaakso         ###   ########.fr       */
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

static void	run_algorithm(t_push_swap *data)
{
	if (is_a_sorted(data))
		return ;
	else if (data->stack_a_size == 2)
		sort_two_a(data);
	else if (data->stack_a_size == 3)
		sort_three_a(data);
	else if (data->stack_a_size <= 10)
		sort_small_a(data);
	else
		sort_small_a(data);
	//ft_printf("Running algorithms finished. ");
	//if (is_a_sorted(data))
	//	ft_printf("Stack A is sorted!\n");
	//else
	//	ft_printf("Stack A is NOT sorted! :(\n");
}

int	main(int ac, char **av)
{
	t_push_swap	*data;

	data = safe_malloc(sizeof(t_push_swap), 0);
	is_valid_input(ac, av);
	read_args(data, ac, av);
	//ft_printf("Passed validity checks\n");
	//print_stacks(data);
	run_algorithm(data);
	//print_stacks(data);
	safe_malloc(0, 1);
	return (0);
}
