/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:33:35 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/26 19:14:14 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two_a(t_push_swap *data)
{
	if (data->stack_a[0] > data->stack_a[1])
		sa(data);
}

void	sort_three_a(t_push_swap *data)
{
	if (data->stack_a[0] < data->stack_a[1])
	{
		if (data->stack_a[1] < data->stack_a[2])
			return ;
		if (data->stack_a[0] < data->stack_a[2])
		{
			rra(data);
			sa(data);
			return ;
		}
		rra(data);
		return ;
	}
	if (data->stack_a[0] > data->stack_a[2])
	{
		if (data->stack_a[1] > data->stack_a[2])
		{
			sa(data);
			rra(data);
			return ;
		}
		ra(data);
		return ;
	}
	sa(data);
}

void	move_a_index_to_top(t_push_swap *data, int index)
{
	int	direction;
	int	val;

	if (index > (data->stack_a_size / 2))
		direction = -1;
	else
		direction = 1;
	val = data->stack_a[index];
	while (data->stack_a[0] != val)
	{
		if (direction == -1)
			rra(data);
		else
			ra(data);
	}
}

int	ret_small_rotations_to_top_a(t_push_swap *data)
{
	int	i;
	int	smallest_idx;

	if (data->stack_a_size < 2)
		return (0);
	i = 1;
	smallest_idx = 0;
	while (i < data->stack_a_size)
	{
		if (data->stack_a[i] < data->stack_a[smallest_idx])
			smallest_idx = i;
		i++;
	}
	if (smallest_idx > (data->stack_a_size / 2))
		return (smallest_idx - data->stack_a_size);
	else
		return (smallest_idx);
}

void	sort_small_a(t_push_swap *data)
{
	int	rotations_to_top;

	while (data->stack_a_size > 3)
	{
		rotations_to_top = ret_small_rotations_to_top_a(data);
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
		pb(data);
	}
	sort_three_a(data);
	while (data->stack_b_size > 0)
		pa(data);
}
