/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   psl_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:09:22 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/16 13:52:58 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_silent(t_push_swap *data)
{
	int	tmp;

	if (data->stack_a_size < 2)
		return ;
	tmp = data->stack_a[0];
	data->stack_a[0] = data->stack_a[1];
	data->stack_a[1] = tmp;
}

void	sb_silent(t_push_swap *data)
{
	int	tmp;

	if (data->stack_b_size < 2)
		return ;
	tmp = data->stack_b[0];
	data->stack_b[0] = data->stack_b[1];
	data->stack_b[1] = tmp;
}

void	sa(t_push_swap *data)
{
	sa_silent(data);
	write(1, "sa\n", 3);
}

void	sb(t_push_swap *data)
{
	sb_silent(data);
	write(1, "sb\n", 3);
}

void	ss(t_push_swap *data)
{
	sa_silent(data);
	sb_silent(data);
	write(1, "ss\n", 3);
}
