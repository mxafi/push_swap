/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:37:41 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/26 18:25:17 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		sort_medium(data);
}

int	main(int ac, char **av)
{
	t_push_swap	*data;

	data = safe_malloc(sizeof(t_push_swap), 0);
	is_valid_input(ac, av);
	read_args(data, ac, av);
	run_algorithm(data);
	safe_malloc(0, 1);
	return (0);
}
