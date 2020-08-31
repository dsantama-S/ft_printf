/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:38:24 by dsantama          #+#    #+#             */
/*   Updated: 2020/08/31 11:18:41 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	char c;
	char *str;
	char *str2;
	int a;
	int *p;
	int num;
	int num2;

	num = 5;
	num2 = 7;
	p = &a;
	c = 'a';
	str = "Mbappe";
	str2 = "Neymar";
	printf("Original: Hola\n\n");
	ft_printf("Mi funcion: Hola\n\n");
	printf("Original: %c, Hola\n\n", 'a');
	ft_printf("Mi funcion: %c, Hola\n\n", 'a');
	printf("Original: %C, Hola\n\n", 'b');
	ft_printf("Mi funcion: %C, Hola\n\n", 'b');
	printf("Original: %c, Hola\n\n", c);
	ft_printf("Mi funcion: %c, Hola\n\n", c);
	printf("Original: %%, Hola\n\n");
	ft_printf("Mi funcion: %%, Hola\n\n");
	printf("Original: %c, Hola, %c\n\n", c, 'b');
	ft_printf("Mi funcion: %c, Hola, %c\n\n", c, 'b');
	printf("Original: Hola, %c, %c, %c\n\n", c, 'b', 'c');
	ft_printf("Mi funcion: Hola, %c, %c, %c\n\n", c, 'b', 'c');
	printf("Original: %s\n\n", str);
	ft_printf("Mi funcion: %s\n\n", str);
	printf("Original: %s o %s\n\n", str, str2);
	ft_printf("Mi funcion: %s o %s\n\n", str, "Neymar");
	printf("Original: %s %c %s\n\n", str, 'y', str2);
	ft_printf("Mi funcion: %s %c %s\n\n", str, 'y', str2);
	printf("Original: direccion = %p\n\n", &p);
	ft_printf("Mi funcion: direccion = %p\n\n", &p);
	printf("Original: direccion = %p %c %p\n\n", &p, 'y', &a);
	ft_printf("Mi funcion: direccion = %p %c %p\n\n", &p, 'y', &a);
	printf("Original: %d %c %D\n\n", num, 'y', num2);
	ft_printf("Mi funcion: %d %c %D\n\n", num, 'y', num2);
	printf("Original: %i %c %D\n\n", num, 'y', 9);
	ft_printf("Mi funcion: %i %c %D\n\n", num, 'y', 9);
	printf("Original: %i %c %d\n\n", 10000, 'y', 5000);
	ft_printf("Mi funcion: %i %c %d\n\n", 10000, 'y', 5000);
	printf("Original: %i %c %d\n\n", -10, 'y', -5);
	ft_printf("Mi funcion: %i %c %d\n\n", -10, 'y', -5);
	printf("Original: %x %c %x\n\n", 11, 'y', 5);
	ft_printf("Mi función: %x %c %x\n\n", 11, 'y', 5);
	printf("Original: %x %c %x\n\n", -11, 'y', -5);
	ft_printf("Mi función: %x %c %x\n\n", -11, 'y', -5);
	printf("Original: %X %c %X\n\n", 11, 'y', 5);
	ft_printf("Mi función: %X %c %X\n\n", 11, 'y', 5);
	printf("Original: %X %c %X\n\n", -11, 'y', -5);
	ft_printf("Mi función: %X %C %X\n\n", -11, 'y', -5);
	printf("Original: %x %c %x\n\n", 16, 'y', 5);
	ft_printf("Mi función: %x %c %x\n\n", 16, 'y', 5);
	printf("Original: %05d\n\n", 6);
	ft_printf("Mi función: %05d\n\n", 6);
	printf("Original: %05d %c %02d\n\n", 6, 'y', 7);
	ft_printf("Mi función: %05d %c %02d\n\n", 6, 'y', 7);
}
