/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkoekemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 10:59:56 by lkoekemo          #+#    #+#             */
/*   Updated: 2016/05/24 13:20:35 by lkoekemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_printf(const char *fmt, ...)
{
	int		i;
	va_list	ap;

	i = 0;
	va_start(ap, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			if (fmt[i + 1] == 'd' || fmt[i + 1] == 'i')
				ft_putnbr(va_arg(ap, int));
			else if (fmt[i + 1] == 'c')
				ft_putchar(va_arg(ap, int));
			else if (fmt[i + 1] == 's')
				ft_putstr(va_arg(ap, char *));
			else if (fmt[i + 1] == 'u')
				ft_putnbr(va_arg(ap, unsigned int));
			else if (fmt[i + 1] == 'o')
				ft_putstr(ft_convert(va_arg(ap, unsigned int), 8));
			else if (fmt[i + 1] == 'x')
				ft_putstr(ft_convert(va_arg(ap, unsigned int), 16));
			i = i + 2;
		}
		ft_putchar(fmt[i]);
		i++;
	}
	va_end(ap);
	return (0);
}
