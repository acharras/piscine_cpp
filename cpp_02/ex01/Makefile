# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 11:48:27 by acharras          #+#    #+#              #
#    Updated: 2021/06/28 13:02:27 by acharras         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC =	Fixed.cpp\
		main.cpp

HEADERS = Fixed.hpp
NAME = Fixed
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