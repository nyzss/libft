CC = cc

CFLAGS = -Wall -Werror -Wextra

SRC_DIR = ./src/

INCLUDES_DIR = ./includes/

SRC_FILES = ft_isdigit.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isalnum.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_strlcpy.c 

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
