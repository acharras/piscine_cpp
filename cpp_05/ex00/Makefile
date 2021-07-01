# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 11:48:27 by acharras          #+#    #+#              #
#    Updated: 2021/07/01 14:24:49 by acharras         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC =	Bureaucrat.cpp\
		main.cpp

HEADERS = Bureaucrat.hpp
NAME = Bureaucrat
CC = clang++
OBJ = ${SRC:.cpp=.o}
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

$(NAME) :	$(OBJ)
				$(CC) $(CPPFLAGS) -o $@ $(OBJ)

all :		${NAME}

%.o: %.cpp $(HEADERS)
			@$(CC) $(CPPFLAGS) -o $@ -c $<	

clean :		
		rm -f $(OBJ)

fclean :     clean
			rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re