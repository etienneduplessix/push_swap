# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edupless <edupless@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 23:08:45 by edupless          #+#    #+#              #
#    Updated: 2023/06/22 19:50:21 by edupless         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
FLAGS = -Wall -Wextra -Werror 
LIBFTDIR = libft
LIBFT = libft.a
SRC_DIR = srcs/
RM = rm -rf 

SRC = $(addprefix $(SRC_DIR), push_swap.c algorithm.c ft_add_back.c ft_stack_new.c ft_check_utils.c ft_parse.c \
solver_utils_ab.c solver_utils_ba.c ft_rotate_and_push.c operations.c operations_2.c operations_3.c ft_check_dup.c \
ft_check_sorted.c  lst_utils.c lst_utils_2.c ft_parse_args_quoted.c ft_list_args.c ft_check_args.c \
ft_sort_big.c ft_sort_three.c ft_rotate_type.c ft_error.c ft_lstclear2.c)

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LIBFTDIR)
	@cp libft/libft.a .
	$(CC) $(FLAGS) $^ $(LIBFT) -o $@ 

%.o: %.cg
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJ)

fclean: clean
	@make fclean -s -C libft
	$(RM) $(LIBFT)
	$(RM) $(NAME)

re:  fclean all

.PHONY: 
	all clean fclean re

