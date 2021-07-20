# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/19 21:29:30 by aniezgod          #+#    #+#              #
#    Updated: 2021/07/19 22:57:05 by aniezgod         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= ${wildcard ./SRCS/*.c}
OBJS		= ${SRCS:.c=.o}

INCS		= includes

NAME		= 

CC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror

.c.o :
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

${NAME} : ${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all : ${NAME}

clean :
		${RM} ${OBJS}

fclean : clean
		${RM} ${NAME}

re :	fclean all

.PHONY: all clean fclean re
