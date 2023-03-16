/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:33:35 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/16 19:02:47 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_push_swap *data)
{
	if (!is_a_sorted(data))
		sa(data);
}

void	sort_three(t_push_swap *data)
{
	if (data->stack_a[0] < data->stack_a[1])
	{
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
