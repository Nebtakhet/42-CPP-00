# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cesasanc <cesasanc@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/02 13:15:18 by cesasanc          #+#    #+#              #
#    Updated: 2024/10/02 14:19:32 by cesasanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

SOURCES	=	megaphone.cpp

OBJS	=	${SOURCES:.cpp=.o}

CFLAGS	=	-Wall -Wextra -Werror -std=c++11

%.o: %.cpp
	@c++ ${CFLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS}
	@c++ ${CFLAGS} ${OBJS} -o ${NAME}

clean:
	@rm -f ${OBJS}

fclean: clean
	@rm -f ${NAME}

re: fclean all

.PHONY: all, clean, fclean, re