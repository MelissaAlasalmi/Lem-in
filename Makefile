# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbehm <bbehm@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/30 09:23:22 by bbehm             #+#    #+#              #
#    Updated: 2020/10/31 11:52:01 by bbehm            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lem-in

SRCS = 	srcs/main.c srcs/initialize.c srcs/room_helpers.c \
		srcs/free_helpers.c 

OBJS = 	main.o initialize.o room_helpers.o free_helpers.o\

INCS = -I includes/lem_in.h
CFLAGS = -Wall -Wextra -Werror
LIB = -L libft -lft

all: $(NAME)

$(NAME):
	@make -C libft
	@gcc $(CFLAGS) -g -c $(SRCS) $(INCS)
	@gcc $(CFLAGS) $(INCS) $(OBJS) $(LIB) -o $(NAME)

clean:
	@rm -f $(OBJS)
	@make -C libft clean

fclean: clean
	@rm -f $(NAME)
	@make -C libft fclean

re: fclean all

.PHONY: clean fclean re all