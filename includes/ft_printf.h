/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:19:33 by wtangcha          #+#    #+#             */
/*   Updated: 2023/06/25 11:19:37 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
size_t	print_type(char c, va_list *args);
size_t	conversion_hex(unsigned long c, int f);
size_t	conversion_d(int n);
size_t	conversion_u(unsigned int n);
size_t	conversion_x(unsigned long long c, int f);
size_t	conversion_upx(unsigned int c, int f);

#endif
