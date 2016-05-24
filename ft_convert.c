/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkoekemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/24 12:39:20 by lkoekemo          #+#    #+#             */
/*   Updated: 2016/05/24 12:48:40 by lkoekemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_convert(unsigned int num, int base)
{
	static char	*rep;
	static char	buffer[50];
	char		*ptr;

	rep = "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	while (num != 0)
	{
		*--ptr = rep[num%base];
		num /= base;
	}
	return (ptr);
}
