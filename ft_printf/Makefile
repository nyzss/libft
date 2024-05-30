# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okoca <okoca@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/20 14:28:24 by okoca             #+#    #+#              #
#    Updated: 2024/05/30 20:34:28 by okoca            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

SRC_DIR = ./src/

INCLUDES_DIR = ./includes/

CFLAGS = -Wall -Werror -Wextra -I../

SRC_FILES = ft_printf.c \
	handle.c \
	main_flags.c \
	utils.c

NAME = libftprintf.a

SRC = ${addprefix ${SRC_DIR}, ${SRC_FILES}}

OBJS = ${SRC:.c=.o}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
