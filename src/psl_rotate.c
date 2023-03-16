/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psl_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:15:31 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/16 13:55:05 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_silent(t_push_swap *data)
{
	int	tmp;

	tmp = data->stack_a[0];
	stack_pop(data->stack_a, data->stack_a_size);
	data->stack_a[data->stack_a_size - 1] = tmp;
}

void	rb_silent(t_push_swap *data)
{
	int	tmp;

	tmp = data->stack_b[0];
	stack_pop(data->stack_b, data->stack_b_size);
	data->stack_b[data->stack_b_size - 1] = tmp;
}

void	ra(t_push_swap *data)
{
	ra_silent(data);
	write(1, "ra\n", 3);
}

void	rb(t_push_swap *data)
{
	rb_silent(data);
	write(1, "rb\n", 3);
}

void	rr(t_push_swap *data)
{
	ra_silent(data);
	rb_silent(data);
	write(1, "rr\n", 3);
}
