/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium_chunks.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 16:56:59 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/26 18:12:30 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_nearbyint(float n)
{
	if (n < 0)
		return ((int)(n - 0.5));
	else
		return ((int)(n + 0.5));
}

static float	ft_sqrt(int n)
{
	float	tmp;
	float	sqrt;

	sqrt = n / 2;
	tmp = 0;
	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (n / tmp + tmp) / 2;
	}
	return (sqrt);
}

int	ret_chunks_for_elements(int element_count)
{
	const float	a = 0.5929;
	float		y;

	if (element_count < 1)
		return (0);
	if (element_count < 6)
		return (1);
	if (element_count < 21)
		return (2);
	y = ft_sqrt(element_count) * a;
	return (ft_nearbyint(y));
}
