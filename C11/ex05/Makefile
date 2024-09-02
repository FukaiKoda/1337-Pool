CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS = srcs/ft_putnbr.c srcs/ft_atoi.c srcs/operation.c

OBJS = ${SRCS.c=.o}

INCS = includes

NAME = do-op

all:
	${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
