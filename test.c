/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkoekemo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/23 11:19:38 by lkoekemo          #+#    #+#             */
/*   Updated: 2016/05/24 13:59:50 by lkoekemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int		main()
{
	int		test_int = 42;
	int		test_int2 = 21;
	char	test_c1 = 'c';
	char	test_c2 = '$';
	char	*test_str = "Forty_Two";
	char	*test_str2 = "Twenty_One";
	unsigned int	u_int = 654;


	printf("\nprintf___ | Test\n");
	ft_printf("ft_printf | Test\n\n");

	//INT %d
	printf("printf___ | int_1: %d |\n", test_int); // CHECK FOR IF THERE IS A SPACE AFTER % SIGN e.g.  %  d
	ft_printf("ft_printf | int_1: %d %d %d %d|\n\n", test_int);
	printf("printf___ | int_1: %d | int_2: %d |\n", test_int, test_int2);
	ft_printf("ft_printf | int_1: %d | int_2: %d |\n\n", test_int, test_int2);
	//INT %i
	printf("printf___ | int_1: %i |\n", test_int);
	ft_printf("ft_printf | int_1: %i |\n\n", test_int);
	printf("printf___ | int_1: %i | int_2: %i |\n", test_int, test_int2);
	ft_printf("ft_printf | int_1: %i | int_2: %i |\n\n", test_int, test_int2);

	//CHAR	
	printf("printf___ | char_1: %c |\n", test_c1);
	ft_printf("ft_printf | char_1: %c |\n\n", test_c1);
	printf("printf___ | char_1: %c | char_2: %c |\n", test_c1, test_c2);	
	ft_printf("ft_printf | char_1: %c | char_2: %c |\n\n", test_c1, test_c2);	

	printf("printf___ | char_1: %c | char_2: %c |\n", 146, 200);
	ft_printf("ft_printf | char_1: %c | char_2: %c |\n\n", 146, 200);

	//STRING
	printf("printf___ | char_1: %s |\n", test_str);
	ft_printf("ft_printf | char_1: %s |\n\n", test_str);
	printf("printf___ | char_1: %s | char_2: %s |\n", test_str, test_str2);
	ft_printf("ft_printf | char_1: %s | char_2: %s |\n\n", test_str, test_str2);

	//UNSIGNED INT
	printf("printf___ | unsigned int_1: %u |\n", u_int);
	ft_printf("ft_printf | unsigned int_1: %u |\n\n", u_int);

	printf("printf___ | neg unsigned int_1: %u |\n", -654);
	ft_printf("ft_printf | neg unsigned int_1: %u |\n\n", -654);

	//OCTAL REPRESENTATION
	printf("printf___ | octal: %o |\n", 104);
	ft_printf("ft_printf | octal: %o |\n\n", 104);

	//HEX REPRESENTATION
	printf("printf___ | hex: %x |\n", 60);	// 'x' is klein letters. 'X' is capitals.
	ft_printf("ft_printf | hex: %x |\n\n", 60);

	printf("TEST %%\n\n");

	printf("TEST OCTAL: %o\n\n", 100);
	return (0);
}
