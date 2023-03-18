/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:37:35 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/18 17:49:35 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "libft.h"

typedef struct s_push_swap
{
	int	*stack_a;
	int	*stack_b;
	int	stack_a_size;
	int	stack_b_size;
}				t_push_swap;

void	error(int case_n);
int		grid_len(char **grid);
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
long	ft_atol(const char *str);
void	destroy_grid(char **grid);
void	sort_two(t_push_swap *data);
void	sort_three(t_push_swap *data);
int		is_a_sorted(t_push_swap *data);
int		is_b_sorted(t_push_swap *data);
int		stack_pop(int *stack, int size);
int		is_valid_input(int ac, char **av);
int		stack_push(int *stack, int size, int value);
void	read_args(t_push_swap *data, int ac, char **av);

#endif