# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malaakso <malaakso@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/14 18:33:13 by malaakso          #+#    #+#              #
#    Updated: 2023/03/23 17:56:33 by malaakso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	push_swap
LIBFT			=	libft.a
COMPILER		=	cc

H_FOLDER		=	inc
C_FOLDER		=	src
OBJ_FOLDER		=	obj
LIBFT_FOLDER	=	libft
FOLDER_LIST		=	$(H_FOLDER) $(C_FOLDER) $(OBJ_FOLDER) \
					$(LIBFT_FOLDER)

H_FILES			=	push_swap.h
C_FILES			=	push_swap.c error.c is_valid_input.c read_args.c \
					psl_swap.c stack_ops.c psl_push.c psl_rotate.c \
					psl_rev_rotate.c sort_check.c sort_small.c grid_ops.c \
					ft_atol.c safe_ft_split.c sort_b.c sort_c.c sort_medium.c

H_PATHS			=	$(addprefix $(H_FOLDER)/, $(H_FILES))
C_PATHS			=	$(addprefix $(C_FOLDER)/, $(C_FILES))
OBJ_PATHS		=	$(addprefix $(OBJ_FOLDER)/, \
					$(patsubst %.c, %.o, $(C_FILES)))

C_FLAGS_OBJ		=	-Wall -Wextra -Werror -g
C_FLAGS_NAME	=	$(C_FLAGS_OBJ)

.PHONY: all
all: $(NAME)

$(NAME): $(FOLDER_LIST) $(OBJ_PATHS) Makefile \
	$(LIBFT_FOLDER)/$(LIBFT)
	$(COMPILER) $(C_FLAGS_NAME) $(OBJ_PATHS) $(LIBFT_FOLDER)/$(LIBFT) -o $@

$(OBJ_PATHS): $(OBJ_FOLDER)/%.o:$(C_FOLDER)/%.c $(H_PATHS) Makefile
	$(COMPILER) $(C_FLAGS_OBJ) -I $(H_FOLDER) -I $(LIBFT_FOLDER) -c $< -o $@

$(LIBFT_FOLDER)/$(LIBFT):
	$(MAKE) -C $(LIBFT_FOLDER)

$(FOLDER_LIST):
	mkdir $@

.PHONY: clean
clean:
	rm -f $(OBJ_PATHS)
	rm -rf $(OBJ_FOLDER)
	$(MAKE) fclean -C $(LIBFT_FOLDER)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all
