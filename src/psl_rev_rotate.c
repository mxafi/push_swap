/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psl_rev_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:23:16 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/02 14:24:24 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_push_swap *data)
{
	int	tmp;

	tmp = data->stack_a[data->stack_a_size - 1];
	data->stack_a_size--;
	data->stack_a_size = stack_push(data->stack_a, data->stack_a_size, tmp);
}

void	rrb(t_push_swap *data)
{
	int	tmp;

	tmp = data->stack_b[data->stack_b_size - 1];
	data->stack_b_size--;
	data->stack_b_size = stack_push(data->stack_b, data->stack_b_size, tmp);
}

void	rrr(t_push_swap *data)
{
	rra(data);
	rrb(data);
}
