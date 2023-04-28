#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd)
void	ft_putstr_fd(char *s, int fd)
size_t	ft_strlen(const char *s);

#endif
