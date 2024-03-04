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

SRC_FILES = atoi.c \
	bzero.c \
	isalnum.c \
	isalpha.c \
	isascii.c \
	isdigit.c \
	isprint.c \
	memcpy.c \
	memmove.c \
	memset.c \
	strchr.c \
	strlcat.c \
	strlcpy.c \
	strlen.c \
	strrchr.c \
	tolower.c \
	toupper.c \
	strncmp.c \
	strnstr.c \
	strdup.c \
	calloc.c \

LIB = libft.a

SRC = ${addprefix ${SRC_DIR}, ${SRC_FILES}}

TESTS_DIR = ./tests/

TESTS_FILES = test_str.c \
	      test_mem.c \
	      test_is.c \

TESTS = ${addprefix ${TESTS_DIR}, ${TESTS_FILES}}

OBJS = ${SRC:.c=.o} ${TESTS:.c=.o}

TARGET = main

%.o: %.c
	${CC} ${CFLAGS} -I ${INCLUDES_DIR} -c $< -o ${<:.c=.o}

${TARGET}: main.c ${LIB}
	${CC} ${CFLAGS} main.c -L. -lft -lbsd -o ${TARGET}

${LIB}: ${OBJS}
	ar rcs ${LIB} ${OBJS}

all: ${TARGET}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${LIB} ${TARGET}

re: fclean all

.PHONY: all clean fclean re

