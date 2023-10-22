# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-moun <mel-moun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 14:43:35 by mel-moun          #+#    #+#              #
#    Updated: 2023/10/18 09:42:43 by mel-moun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp Ortho-Clap.cpp ClapTrap.cpp ScavTrap.cpp Ortho-Scav.cpp Ortho-Frag.cpp\
FragTrap.cpp DiamondTrap.cpp Ortho-Diamond.cpp

OBJ_DIR = obj

VPATH = src

OBJS = $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(notdir $(SRC)))
NAME = ClapTrap

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $@

$(OBJ_DIR)/%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

