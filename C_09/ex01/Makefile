CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJ = ${SRC:.c=.o}

INCS = includes

LIB = ranlib

NAME = libft.a


all: ${NAME}

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}
	${LIB} ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
