# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aniezgod <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/22 23:23:29 by aniezgod          #+#    #+#              #
#    Updated: 2021/07/22 23:23:48 by aniezgod         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS	=	${SRCS:.c=.o}

CC		=	gcc

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c -I./includes $< -o ${<:.c=.o}

all:	${NAME}

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS}

clean:	${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all
