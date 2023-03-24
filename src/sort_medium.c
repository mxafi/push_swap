/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:56:26 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/23 19:19:45 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ret_a_index(t_push_swap *data, int value)
{
	int	i;

	i = 0;
	while (i != value && i < data->stack_a_size)
	{
		if (data->stack_a[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

// returns the index of an element that is less than or equals to the cutoff
// that is the closest to the top of stack A

static int	ret_a_index_below_or_eq_cutoff_num(t_push_swap *data, int cutoff)
{
	int	i;

	if (data->stack_a[0] <= cutoff)
		return (0);
	i = 1;
	while (i < data->stack_a_size)
	{
		if (data->stack_a[i] <= cutoff
			&& data->stack_a[data->stack_a_size - i] <= cutoff)
		{
			if (data->stack_a[i] > data->stack_a[data->stack_a_size - i])
				return (data->stack_a_size - i);
			else
				return (i);
		}
		if (data->stack_a[i] <= cutoff)
			return (i);
		if (data->stack_a[data->stack_a_size - i] <= cutoff)
			return (data->stack_a_size - i);
		i++;
	}
	return (-1);
}

static void	move_a_index_to_top(t_push_swap *data, int index)
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

void	sort_medium(t_push_swap *data)
{
	int	n_of_chunks;
	int	current_chunk;
	int	current_chunk_cutoff;
	int	idx;

	stack_copy_a_to_c(data);
	n_of_chunks = 4;
	current_chunk = 1;
	while (current_chunk < n_of_chunks)
	{
		current_chunk_cutoff = (data->stack_c[current_chunk
				* (data->stack_c_size / n_of_chunks)]);
		while (1)
		{
			idx = ret_a_index_below_or_eq_cutoff_num(data,
					current_chunk_cutoff);
			if (idx == -1)
				break ;
			move_a_index_to_top(data, idx);
			pb(data);
		}
		current_chunk++;
	}
	while (data->stack_a_size > 3)
	{
		idx = ret_small_rotations_to_top_a(data);
		while (idx != 0)
		{
			if (idx > 0)
			{
				ra(data);
				idx--;
			}
			else
			{
				rra(data);
				idx++;
			}
		}
		pb(data);
	}
	sort_three_a(data);
	// now we should have a sorted a with 3 elements, all that is left is looping and
	// finding the biggest number in stack B.. check for optimal case first:
	// case 1: biggest number pushed to A with (sb, pa)
	// case 2: choose shortest path using rb and rrb then pa
}