NAME = libft.a
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.
BUILD_DIR = ./build
SRC_DIRS = ./
INCS_DIR = ./

SRCS = ft_baselen.c \
			 		ft_itoa.c\
					ft_putchar_fd.c\
					ft_putstr_fd.c\
					ft_strlen.c

OBJS = $(SRCS:%=$(BUILD_DIR)/%.o)

all: $(BUILD_DIR)/$(NAME)

$(BUILD_DIR)/$(NAME): $(OBJS) $(INCS)
	ar rcs $(NAME) $(OBJS)

$(BUILD_DIR)/%.c.o: %.c	
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I $(INCS_DIR) -c $< -o $@

clean:
	$(RM) -r $(BUILD_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
