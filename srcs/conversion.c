/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:23:39 by wtangcha          #+#    #+#             */
/*   Updated: 2023/06/25 11:23:43 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

size_t	conversion_p(unsigned long long c, int f)
{
	size_t	len;

	len = 0;
	if (f == 'p')
		len += write(1, "0x", 2);
	if (c == '0')
	{
		ft_putchar_fd('0', 1);
		len++;
	}
	else
		len += conversion_x(c, f);
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
	ft_putstr_fd(str, 1);
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
		ft_putchar_fd(n + '0', 1);
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
		ft_putchar_fd(c + '0', 1);
	else
	{
		if (f == 'x' || f == 'p')
			ft_putchar_fd(c - 10 + 'a', 1);
		else
			ft_putchar_fd(c - 10 + 'A', 1);
	}
	return (len);
}
