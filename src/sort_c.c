/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:21:17 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/23 17:31:41 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_c(t_push_swap *data)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < data->stack_c_size)
	{
		j = 0;
		while (j < data->stack_c_size)
		{
			if (data->stack_c[i] < data->stack_c[j])
			{
				tmp = data->stack_c[i];
				data->stack_c[i] = data->stack_c[j];
				data->stack_c[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
