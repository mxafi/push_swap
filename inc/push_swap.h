/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:37:35 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/02 14:27:51 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

typedef struct s_push_swap
{
	int	*stack_a;
	int	*stack_b;
	int	stack_a_size;
	int	stack_b_size;
}				t_push_swap;

void	error(int handle);
int		is_valid_input(int ac, char **av);
void	read_args(t_push_swap *data, int ac, char **av);
void	sa(t_push_swap *data);
void	sb(t_push_swap *data);
void	ss(t_push_swap *data);
void	pa(t_push_swap *data);
void	pb(t_push_swap *data);
void	ra(t_push_swap *data);
void	rb(t_push_swap *data);
void	rr(t_push_swap *data);
void	rra(t_push_swap *data);
void	rrb(t_push_swap *data);
void	rrr(t_push_swap *data);
int		stack_push(int *stack, int size, int value);
int		stack_pop(int *stack, int size);

#endif