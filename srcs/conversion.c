/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <wtangcha> <wtangcha@student.42bangkok.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:23:39 by wtangcha          #+#    #+#             */
/*   Updated: 2023/10/03 11:06:25 by <wtangcha>       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	conversion_hex(unsigned long c, int f)
{
	size_t	len;

	len = 0;
	if (f == 'p')
		len += write(1, "0x", 2);
	if (c == 0)
	{
		ft_putchar('0');
		len++;
	}
	else if (f == 'p')
		len += conversion_x(c, f);
	else
		len += conversion_upx(c, f);
	return (len);
}

size_t	conversion_d(int n)
{
	size_t		len;
	char		*str;

	str = ft_itoa(n);
	if (!str)
		return (0);
	len = ft_strlen(str);
	ft_putstr(str);
	free(str);
	return (len);
}

size_t	conversion_u(unsigned int n)
{
	size_t	len;

	len = ft_baselen(n, 10);
	if (n >= 10)
	{
		conversion_u(n / 10);
		conversion_u(n % 10);
	}
	else
		ft_putchar(n + '0');
	return (len);
}

size_t	conversion_x(unsigned long long c, int f)
{
	size_t	len;

	len = ft_baselen(c, 16);
	if (c >= 16)
	{
		conversion_x(c / 16, f);
		conversion_x(c % 16, f);
	}
	else if (c <= 9)
		ft_putchar(c + '0');
	else
	{
		if (f == 'x' || f == 'p')
			ft_putchar(c - 10 + 'a');
		else
			ft_putchar(c - 10 + 'A');
	}
	return (len);
}

size_t	conversion_upx(unsigned int c, int f)
{
	size_t	len;

	len = ft_baselen(c, 16);
	if (c >= 16)
	{
		conversion_upx(c / 16, f);
		conversion_upx(c % 16, f);
	}
	else if (c <= 9)
		ft_putchar(c + '0');
	else
	{
		if (f == 'x' || f == 'p')
			ft_putchar(c - 10 + 'a');
		else
			ft_putchar(c - 10 + 'A');
	}
	return (len);
}
