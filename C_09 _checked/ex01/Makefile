CC = cc

SOURCES = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

NAME = libft.a

INC = includes

OBJECTS = $(SOURCES:.c=.o)

CC_FLAGS = -Wall -Wextra -Werror

LIBINDEX = ranlib

LIBSTATIC = ar -rcs

all: ${NAME}
	
%.o : %.c
	${CC} ${CC_FLAGS} -c $< -o ${<:.c=.o} -I ${INC}

${NAME}: ${OBJECTS}
	${LIBSTATIC} ${NAME} ${OBJECTS}
	${LIBINDEX} ${NAME}

re: fclean all

clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${NAME}
