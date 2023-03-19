/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 19:37:40 by malaakso          #+#    #+#             */
/*   Updated: 2023/03/19 19:10:19 by malaakso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	print_exit(void)
{
	ft_putstr_fd("Error\n", 2);
	exit (1);
}

void	*safe_malloc(size_t size, int free_true)
{
	static void	*pointer_list[SAFE_MALLOC_MAX];
	static int	pointer_list_len;
	void		*p;

	if (free_true)
	{
		while (pointer_list_len > 0)
		{
			if (pointer_list[pointer_list_len - 1])
				free(pointer_list[pointer_list_len - 1]);
			pointer_list_len--;
		}
		return (NULL);
	}
	if (pointer_list_len == SAFE_MALLOC_MAX)
		return (NULL);
	p = malloc(size);
	if (!p)
		return (NULL);
	pointer_list_len++;
	pointer_list[pointer_list_len - 1] = p;
	return (p);
}

// case numbers:
// 0 - just exit
// 1 - error text, no cleanup

void	error(int case_n)
{
	safe_malloc(0, 0);
	if (case_n == 0)
		exit(1);
	else if (case_n == 1)
		print_exit();
}
