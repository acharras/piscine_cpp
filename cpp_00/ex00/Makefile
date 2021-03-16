# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acharras <acharras@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 10:32:08 by acharras          #+#    #+#              #
#    Updated: 2021/03/15 11:42:01 by acharras         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC =	megaphone.cpp\

NAME = megaphone
CC = clang++
OBJ = ${SRC:.cpp=.o}
CPPFLAGS = -Wall -Wextra -Werror

$(NAME) :	$(OBJ)
				$(CC) $(CPPFLAGS) -o $@ $(OBJ)

all :		${NAME}

%.o: %.cpp 	@$(CC) $(CPPFLAGS) -o $@ -c $<	

clean :		
		rm -f $(OBJ)

fclean :     clean
			rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re