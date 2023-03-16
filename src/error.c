/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:37:40 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/16 14:05:18 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	print_exit(void)
{
	ft_putstr_fd("Error\n", 2);
	exit (1);
}

// case numbers:
// 0 - just exit
// 1 - error text, no cleanup

void	error(int case_n)
{
	if (case_n == 0)
		exit(1);
	else if (case_n == 1)
		print_exit();
}
