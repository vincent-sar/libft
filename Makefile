SRCS	= ft_isalpha.c 
OBJS	= ${SRCS:.c=.o}
INCS	= libft.h
NAME	= libft.a
CC		= gcc
LIBC	= ar rcs
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror -I $(INCS)

all: ${NAME}

${NAME}:${OBJS}
		${LIBC} ${NAME} ${OBJS}

clean:
		$(RM) ${OBJS}

fclean: clean
		$(RM) $(NAME)

re:		fclean all