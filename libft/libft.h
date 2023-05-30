#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>

char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd)
void	ft_putstr_fd(char *s, int fd)
size_t	ft_strlen(const char *s);
size_t	ft_baselen(size_t n, int base)

#endif
