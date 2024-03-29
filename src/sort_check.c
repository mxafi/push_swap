/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:24:06 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/23 17:47:34 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_a_sorted(t_push_swap *data)
{
	int	i;

	i = 1;
	while (i < data->stack_a_size)
	{
		if (data->stack_a[i] <= data->stack_a[i - 1])
			return (0);
		i++;
	}
	return (1);
}

int	is_b_sorted(t_push_swap *data)
{
	int	i;

	i = 1;
	while (i < data->stack_b_size)
	{
		if (data->stack_b[i] <= data->stack_b[i - 1])
			return (0);
		i++;
	}
	return (1);
}

int	is_c_sorted(t_push_swap *data)
{
	int	i;

	i = 1;
	while (i < data->stack_c_size)
	{
		if (data->stack_c[i] <= data->stack_c[i - 1])
			return (0);
		i++;
	}
	return (1);
}
