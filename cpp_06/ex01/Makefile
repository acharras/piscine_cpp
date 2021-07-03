# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/01 11:49:06 by acharras          #+#    #+#              #
#    Updated: 2021/07/03 17:13:25 by acharras         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC =	Data.cpp\
		main.cpp

HEADERS = Data.hpp\

NAME = Data
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