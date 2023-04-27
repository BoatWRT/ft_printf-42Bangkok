/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 12:35:16 by wtangcha          #+#    #+#             */
/*   Updated: 2023/04/09 10:29:36 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Parameters: n: the integer to convert.
Return value The string representing the integer.
NULL if the allocation fails.*/

/*Description: Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.*/

#include "libft.h"

size_t	ft_intlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;
	long	num;

	len = ft_intlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	num = (long)n;
	if (n == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		len--;
		str[len] = num % 10 + '0';
		num = num / 10;
	}
	return (str);
}
