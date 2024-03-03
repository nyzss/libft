# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okoca <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/00/00 10:00:00 by okoca             #+#    #+#              #
#    Updated: 2024/00/00 10:00:00 by okoca            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRC_DIR = ./src/

INCLUDES_DIR = ./includes/

SRC_FILES = bzero.c \
	isalnum.c \
	isalpha.c \
	isascii.c \
	isdigit.c \
	isprint.c \
	strlcat.c \
	strlcpy.c \
	strlen.c \
	memset.c \
	memcpy.c \
	toupper.c \
	tolower.c \

LIB = libft.a

SRC = ${addprefix ${SRC_DIR}, ${SRC_FILES}}

OBJS = ${SRC:.c=.o}

TARGET = main

%.o: %.c
	${CC} ${CFLAGS} -I ${INCLUDES_DIR} -c $< -o ${<:.c=.o}

${TARGET}: main.c ${LIB}
	${CC} ${CFLAGS} main.c -L. -lft -o ${TARGET}

${LIB}: ${OBJS}
	ar rcs ${LIB} ${OBJS}

all: ${TARGET}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${LIB} ${TARGET}

re: fclean all

.PHONY: all clean fclean re
