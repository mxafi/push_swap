/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:19:35 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/23 17:45:57 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_push(int *stack, int size, int value)
{
	int	new_size;

	new_size = size + 1;
	while (size > 0)
	{
		stack[size] = stack[size - 1];
		size--;
	}
	stack[0] = value;
	return (new_size);
}

int	stack_pop(int *stack, int size)
{
	int	i;
	int	new_size;

	new_size = size - 1;
	i = 0;
	while (i < size - 1)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	return (new_size);
}

void	stack_copy_a_to_c(t_push_swap *data)
{
	int	i;

	data->stack_c_size = data->stack_a_size;
	data->stack_c = safe_malloc(data->stack_c_size, 0);
	i = 0;
	while (i < data->stack_c_size)
	{
		data->stack_c[i] = data->stack_a[i];
		i++;
	}
}
