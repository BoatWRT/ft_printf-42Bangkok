/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:23:50 by wtangcha          #+#    #+#             */
/*   Updated: 2023/06/25 11:23:52 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdarg.h>

int	ft_printf(const char *str, ...)
{
	va_list		args;
	size_t		len;

	len = 0;
	if (str == NULL)
		return (0);
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			len += print_type(*(str + 1), &args);
			str++;
		}
		else
			len += ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (len);
}

size_t	print_type(char c, va_list *args)
{
	size_t	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(*args, int));
	else if (c == 's')
		len += ft_putstr(va_arg(*args, char *));
	else if (c == 'p')
		len += conversion_p(va_arg(*args, unsigned long long), 'p');
	else if (c == 'd' || c == 'i')
		len += conversion_d(va_arg(*args, int));
	else if (c == 'u')
		len += conversion_u(va_arg(*args, unsigned int));
	else if (c == 'x' || c == 'X')
		len += conversion_x(va_arg(*args, unsigned long), c);
	else
		len += ft_putchar('%');
	return (len);
}
