/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:19:35 by malaakso          #+#    #+#             */
/*   Updated: 2023/02/14 21:49:30 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_push(int *stack, int size, int value)
{
	int	new_size;

	new_size = size + 1;
	while (size > 0)
	{
		stack[size - 1] = stack[size];
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
