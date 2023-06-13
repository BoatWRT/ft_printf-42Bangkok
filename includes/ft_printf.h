#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
size_t	print_type(int c, va_list *args);
size_t	conversion_p(unsigned long long c, int f);
size_t	conversion_d(int n);
size_t	conversion_u(unsigned int n);
size_t	conversion_x(unsigned long long int, int f);

#endif
