/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:31:37 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/18 17:40:39 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	clamp_overflow(size_t input, size_t max_value, int sign)
{
	if (input > max_value)
	{
		if (sign == 1)
			return ((long)max_value);
		else if (input > max_value + 1)
			return ((long)(max_value + 1));
	}
	return ((long)input * sign);
}

long	ft_atol(const char *str)
{
	size_t	ans;
	int		sign;
	size_t	long_max;

	ans = 0;
	sign = 1;
	if (!*str)
		return (0);
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	long_max = 9223372036854775807;
	while (*str >= '0' && *str <= '9')
	{
		if (ans > long_max)
			break ;
		ans = ans * 10 + (*str - '0');
		str++;
	}
	return (clamp_overflow(ans, long_max, sign));
}
