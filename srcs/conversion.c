#include "ft_printf.h"
#include "libft.h"

//not finished
size_t conversion_p(unsigned long long c, int f)
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
	else if (f == 'p')
		len += ฟังก์ชั่นซักอย่าง1
	else
		len += ฟังก์ชั่นซักอย่าง2
	return (len);
}

// not finish / sure
size_t conversion_d(int n)
{
	size_t		len;
	char		*str;

	str = ft_itoa(n);
	if (!str)
		return (NULL);
	len = ft_strlen(str)
	ft_putstr_fd(str, 1);
	free(str);
	return (len);
}



size_t conversion_u(unsigned int n)


size_t conversion_x(unsigned long long int, int f)
{
	size_t len = 0;

	if (c >= 16)
	{
		len += conversion_x(c / 16, f);
		len += conversion_x(c % 16, f);
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
