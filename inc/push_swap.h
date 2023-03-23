/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:37:35 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/23 19:19:07 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "libft.h"

# ifndef SAFE_MALLOC_MAX
#  define SAFE_MALLOC_MAX 10000
# endif

typedef struct s_push_swap
{
	int	*stack_a;
	int	*stack_b;
	int	*stack_c;
	int	stack_a_size;
	int	stack_b_size;
	int	stack_c_size;
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
void	sort_c(t_push_swap *data);
void	sort_big_b(t_push_swap *data);
void	sort_two_a(t_push_swap *data);
int		is_c_sorted(t_push_swap *data);
void	sort_three_a(t_push_swap *data);
void	sort_small_a(t_push_swap *data);
int		is_a_sorted(t_push_swap *data);
int		is_b_sorted(t_push_swap *data);
void	sort_medium(t_push_swap *data);
int		stack_pop(int *stack, int size);
void	print_stacks(t_push_swap *data);
int		is_valid_input(int ac, char **av);
void	stack_copy_a_to_c(t_push_swap *data);
char	**safe_ft_split(char const *s, char c);
void	*safe_malloc(size_t size, int free_true);
int		stack_push(int *stack, int size, int value);
void	read_args(t_push_swap *data, int ac, char **av);
int		ret_small_rotations_to_top_a(t_push_swap *data);

#endif