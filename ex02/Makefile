# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/30 22:28:30 by fabou-za          #+#    #+#              #
#    Updated: 2022/12/31 20:48:33 by fabou-za         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = forms
CFLAGS = -Wall -Werror -Wextra -std=c++98
CC = c++

SRC_NAME = Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp main.cpp

OBJ_NAME = $(SRC_NAME:%.cpp=%.o)
HEADERS = Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp

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
