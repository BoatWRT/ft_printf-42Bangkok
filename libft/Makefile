CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.

SRCS = ft_itoa.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_strlen.c \

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
