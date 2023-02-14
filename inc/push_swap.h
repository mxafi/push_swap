/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:37:35 by malaakso          #+#    #+#             */
/*   Updated: 2023/02/14 20:22:24 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

typedef struct s_push_swap
{
	int	**stack_a;
	int	**stack_b;
	int	stack_a_size;
	int	stack_b_size;
}				t_push_swap;

void	error(int handle);
int		is_valid_input(int ac, char **av);

#endif