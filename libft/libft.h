/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtangcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:26:42 by wtangcha          #+#    #+#             */
/*   Updated: 2023/06/25 11:26:43 by wtangcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>
# include <stddef.h>

char	*ft_itoa(int n);
int		ft_putchar(int c);
int		ft_putstr(char *s);
size_t	ft_strlen(const char *s);
size_t	ft_baselen(size_t n, int base);

#endif
