# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: huahmad <huahmad@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/26 11:03:19 by huahmad           #+#    #+#              #
#    Updated: 2024/09/17 15:44:25 by huahmad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= so_long
CFLAGS	= -Wextra -Wall -Werror -g
LIBMLX	= MLX42
MLX_FLAGS = -L $(LIBMLX)/build -lmlx42 -lglfw
cc 		= cc
INCLUDES = -I $(LIBMLX)/include
SRCS	= ft_so_long.c
OBJS	= ${SRCS:.c=.o}
libft	= ./needed/libft/libft.a


all: $(LIBFT) libmlx $(NAME)

$(LIBFT):
	$(MAKE) -C ./needed/libft

libmlx:
	@cmake -B $(LIBMLX)/build -S $(LIBMLX)
	@cmake --build $(LIBMLX)/build -j4

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $< $(INCLUDES)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) ./needed/libft/libft.h $(MLX_FLAGS) 

## line 27 has a problem probably with the .h
clean:
	@rm -rf $(OBJS)
	@rm -rf $(LIBMLX)/build

fclean: clean
	@rm -rf $(NAME)
	$(MAKE) -C ./needed/libft fclean

re: clean all

.PHONY: all, clean, fclean, re, libmlx
