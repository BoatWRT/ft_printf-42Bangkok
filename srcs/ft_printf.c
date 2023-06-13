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
			len = len + print_type(*(str + 1), &args);
			str++;
		}
		else
			len = len + ft_putchar_fd(*str, 1);
			str++;
	}
	va_end(args);
	return (len);
}

size_t	print_type(int c, va_list *args)
{
	if (c == 'c')
		len += ft_putchar_fd(va_arg(*args, int), 1);
	else if(c == 's')
		len += ft_putstr_fd(va_arg(*args, char *), 1);


	else if(c == 'p')
		len += conversion_p(va_arg(*args, unsigned long long), 'p');

	else if(c == 'd' || c == 'i')
		len += conversion_d(va_arg(*args, int));


	else if(c == 'u')
		len += conversion_u(va_arg(*args, unsigned int));
	else if(c == 'x')
		len += conversion_x(va_arg(*args, unsigned long), 'x');
	else if(c == 'X')
		len += conversion_x(va_arg(*args, unsigned long), 'X');
	else
	len += ft_putchar_fd('%', 1);
	return (len);
}
