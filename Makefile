NAME = libftprintf.a
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.

SRCS		=	ft_printf.c \
				conversion.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
