/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psl_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:50:52 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/16 13:59:26 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa_silent(t_push_swap *data)
{
	if (data->stack_b_size < 1)
		return ;
	data->stack_a_size = stack_push(data->stack_a, data->stack_a_size,
			data->stack_b[0]);
	data->stack_b_size = stack_pop(data->stack_b, data->stack_b_size);
}

void	pb_silent(t_push_swap *data)
{
	if (data->stack_a_size < 1)
		return ;
	data->stack_b_size = stack_push(data->stack_b, data->stack_b_size,
			data->stack_a[0]);
	data->stack_a_size = stack_pop(data->stack_a, data->stack_a_size);
}

void	pa(t_push_swap *data)
{
	pa_silent(data);
	write(1, "pa\n", 3);
}

void	pb(t_push_swap *data)
{
	pb_silent(data);
	write(1, "pb\n", 3);
}
