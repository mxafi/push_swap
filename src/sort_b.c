/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:47:54 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/23 17:00:25 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ret_big_rotations_to_top_b(t_push_swap *data)
{
	int	i;
	int	largest_idx;

	if (data->stack_b_size < 2)
		return (0);
	i = 1;
	largest_idx = 0;
	while (i < data->stack_b_size)
	{
		if (data->stack_b[i] > data->stack_b[largest_idx])
			largest_idx = i;
		i++;
	}
	if (largest_idx > (data->stack_b_size / 2))
		return (largest_idx - data->stack_b_size);
	else
		return (largest_idx);
}

void	sort_big_b(t_push_swap *data)
{
	int	rotations_to_top;

	while (data->stack_b_size > 0)
	{
		rotations_to_top = ret_big_rotations_to_top_b(data);
		while (rotations_to_top != 0)
		{
			if (rotations_to_top > 0)
			{
				ra(data);
				rotations_to_top--;
			}
			else
			{
				rra(data);
				rotations_to_top++;
			}
		}
		pa(data);
	}
}
