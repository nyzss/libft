#NAME = libft.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

INCLUDES = ./includes/

SRC = ./src/

LIB_FILES = ft_isdigit.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isalnum.c \
	ft_isprint.c \
	ft_strlcpy.c \

MAIN_FILES = main.c

LIBRARY = libft.a

NAME = main.out

SRCS = ${addprefix ${SRC}, ${LIB_FILES}}

OBJS = ${SRCS:.c=.o}

.c.o:
	${CC} ${CFLAGS} -I ${INCLUDES} $< -c -o ${<:.c=.o}

# ${NAME}: ${OBJS}
# 	${CC} ${CLFLAGS} -I ${INCLUDES} ${OBJS} -o ${NAME}

${LIBRARY}: ${OBJS}
	ar rcs ${LIBRARY} ${OBJS}

${NAME}: ${LIBRARY}
	${CC} ${CLFLAGS} -l${LIBRARY} -I ${INCLUDES} ${MAIN_FILES} -o ${NAME}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}
	rm -f ${LIBRARY}

re: fclean ${NAME}

.PHONY: all clean fclean re

