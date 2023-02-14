/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:37:40 by malaakso          #+#    #+#             */
/*   Updated: 2023/02/14 19:46:02 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	print_exit(void)
{
	ft_putstr_fd("Error\n", 2);
	exit (1);
}

// handle codes:
// 0 - just exit
// 1 - error text, no cleanup

void	error(int handle)
{
	if (handle == 0)
		exit(1);
	else if (handle == 1)
		print_exit();
}
