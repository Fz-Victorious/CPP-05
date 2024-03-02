# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/30 14:52:14 by fabou-za          #+#    #+#              #
#    Updated: 2022/12/30 18:56:03 by fabou-za         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
CFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++

SRC_NAME = Bureaucrat.cpp main.cpp

OBJ_NAME = $(SRC_NAME:%.cpp=%.o)
HEADERS = Bureaucrat.hpp

all: $(NAME)

$(NAME): $(OBJ_NAME)
	$(CC) $^ -o $@

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ_NAME)

fclean: clean 
	rm -rf $(NAME)

re: fclean all
