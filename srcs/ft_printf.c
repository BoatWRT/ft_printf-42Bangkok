#include "ft_printf.h"
#include "libft.h"
#include <stdarg.h>

int	ft_printf(const char *str, ...)
{
	va_list		args;
	size_t			len;

	len = 0;
	if (str == NULL)
		return (0);
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			print_type(*(str + 1), &args);
			str++;
		}
		else
			ft_putchar_fd(*str, 0);
		str++;
	}
	va_end(args);
	return (len);
}

size_t	print_type(int c, va_list *args)
{
	size_t	len;

	len = 0;
	if (c == 'c')
		ft_putchar_fd(va_arg(*args, int), 1);
	else if(c == 's')
		ft_putstr_fd(va_arg(*args, char *), 1);
	else if(c == 'p')
		conversion_p(va_arg(*args, unsigned long long), 'p');
	else if(c == 'd' || c == 'i')
		conversion_d(va_arg(*args, int));
	else if(c == 'u')
		conversion_u(va_arg(*args, unsigned int));
	else if(c == 'x')
		conversion_x(va_arg(*args, unsigned long), 'x');
	else if(c == 'X')
		conversion_x(va_arg(*args, unsigned long), 'X');
	else
		ft_putchar_fd('%', 1);
	len++;
	return (len);
}
