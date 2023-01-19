# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvrignon <rvrignon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 18:29:11 by rvrignon          #+#    #+#              #
#    Updated: 2023/01/19 18:29:34 by rvrignon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Bureaucrat

SRC = 	main.cpp \
		Bureaucrat.cpp \

OBJ = $(SRC:.cpp=.o)

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re