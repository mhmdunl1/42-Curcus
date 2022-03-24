/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: munal <munal@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 13:13:41 by munal             #+#    #+#             */
/*   Updated: 2022/03/09 13:13:48 by munal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"
#include <stdio.h>

int	ft_putstr(char *str)
{
	if (!str)
		return (ft_putstr("(null)"));
	return (write(1, str, ft_strlen(str)));
}

int	ft_putchar(char c)
{
	int	sayi;

	sayi = 0;
	sayi += write(1, &c, 1);
	return (sayi);
}

int	ft_putpointer(void *ptr)
{
	unsigned long	ret;
	int				res;

	ret = (unsigned long)ptr;
	res = 0;
	if (ret > 15)
		res += ft_putpointer((void *)(ret / 16));
	res += ft_putchar("0123456789abcdef"[ret % 16]);
	return (res);
}

int	ft_putnbr(int number)
{
	char	*num;
	int		len;

	len = 0;
	num = ft_itoa(number);
	len += ft_putstr(num);
	free(num);
	return (len);
}

int	ft_putunint(unsigned int number)
{
	int	i;

	i = 0;
	if (number > 9)
		i += ft_putunint(number / 10);
	write(1, &"0123456789"[number % 10], 1);
	i++;
	return (i);
}
