/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:37:41 by malaakso          #+#    #+#             */
/*   Updated: 2023/02/14 20:19:09 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	//t_push_swap	data;

	is_valid_input(ac, av);
	//read_args(data, ac, av);// todo
	//run_algorithms(data); // todo: runs algos, chooses shortest, prints its commands
	ft_printf("Passed validity checks, debug msg\n");
	return (0);
}