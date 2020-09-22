/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:38:24 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/22 10:04:55 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	char 			c;
	unsigned char 	h;
	char			k;
	char 			*str;
	char 			*str2;
	int 			a;
	int 			*p;
	int 			num;
	int 			num2;

	num = 5;
	num2 = 7;
	k = -1;
	h = -1;
	p = &a;
	c = 'a';
	str = "Mbappe";
	str2 = "Neymar";
	printf("\n*************** %s ***************\n\n", "Tests de c");
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
	printf("\n*************** %s ***************\n\n", "Tests de s");
	printf("Original: %s\n\n", str);
	ft_printf("Mi funcion: %s\n\n", str);
	printf("Original: %s o %s\n\n", str, str2);
	ft_printf("Mi funcion: %s o %s\n\n", str, "Neymar");
	printf("Original: %s %c %s\n\n", str, 'y', str2);
	ft_printf("Mi funcion: %s %c %s\n\n", str, 'y', str2);
	printf("Original: %s%s\n\n", str, str2);
	ft_printf("Mi funcion: %s%s\n\n", str, str2);
	printf("Original: %s%s%s\n\n", str, str2, "Lewandowski");
	ft_printf("Mi funcion: %s%s%s\n\n", str, str2, "Lewandowski");
	printf("Original: %s%s%s%s\n\n", str, str2, "Lewandowski", "Davis");
	ft_printf("Mi funcion: %s%s%s%s\n\n", str, str2, "Lewandowski", "Davis");
	printf("Original: %s%s%s%s%s\n\n", str, str2, "Lewandowski", "Davis", "CR7");
	ft_printf("Mi funcion: %s%s%s%s%s\n\n", str, str2, "Lewandowski", "Davis", "CR7");
	printf("\n*************** %s ***************\n\n", "Tests de punteros");
	printf("Original: direccion = %p\n\n", &p);
	ft_printf("Mi funcion: direccion = %p\n\n", &p);
	printf("Original: direccion = %p %c %p\n\n", &p, 'y', &a);
	ft_printf("Mi funcion: direccion = %p %c %p\n\n", &p, 'y', &a);
	printf("\n*************** %s ***************\n\n", "Tests de int");
	printf("Original: %d %c %D\n\n", num, 'y', num2);
	ft_printf("Mi funcion: %d %c %D\n\n", num, 'y', num2);
	printf("Original: %i %c %D\n\n", num, 'y', 9);
	ft_printf("Mi funcion: %i %c %D\n\n", num, 'y', 9);
	printf("Original: %i %c %d\n\n", 10000, 'y', 5000);
	ft_printf("Mi funcion: %i %c %d\n\n", 10000, 'y', 5000);
	printf("Original: %i %c %d\n\n", -10, 'y', -5);
	ft_printf("Mi funcion: %i %c %d\n\n", -10, 'y', -5);
	printf("Original: %i %c %d\n\n", k, 'y', h);
	ft_printf("Mi funcion: %i %c %d\n\n", k, 'y', h);
	printf("\n*************** %s ***************\n\n", "Tests de hex");
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
	printf("\n*************** %s ***************\n\n", "Tests de uns");
	printf("Original: %u %c %u\n\n", 42, 'y', 42);
	ft_printf("Mi función: %u %c %u\n\n", 42, 'y', 42);
	printf("Original: %u %c %u\n\n", 'a', 'y', 'b');
	ft_printf("Mi función: %u %c %u\n\n", 'a', 'y', 'b');
	printf("Original: %U %c %u\n\n", 420, 'y', -1);
	ft_printf("Mi función: %U %c %u\n\n", 420, 'y', -1);
	printf("Original: %U %c %u\n\n", k, 'y', h);
	ft_printf("Mi función: %U %c %u\n\n", k, 'y', h);
	printf("\n*************** %s ***************\n\n", "Tests de espacios");
	printf("F1: %10s %s\n\n", "si", "no");
	ft_printf("F2: %10s %s\n\n", "si", "no");
	printf("F1: %32s %s\n\n", "siempre", "no");
	ft_printf("F2: %32s %s\n\n", "siempre", "no");
	printf("F1: %5s %s\n\n", "siempre si", "no");
	ft_printf("F2: %5s %s\n\n", "siempre si", "no");
	printf("F1: %5c %c\n\n", 'N', 'O');
	ft_printf("F2: %5c %c\n\n", 'N', 'O');
	printf("F1: %10c %c\n\n", 'S', 'I');
	ft_printf("F2: %10c %c\n\n", 'S', 'I');
	printf("F1: %32%, Hola\n\n");
	ft_printf("F2: %32%, Hola\n\n");
	printf("F1: direccion = %32p\n\n", &p);
	ft_printf("F2: direccion = %32p\n\n", &p);
	printf("F1: direccion = %5p %c %4p\n\n", &p, 'y', &a);
	ft_printf("F2: direccion = %5p %c %4p\n\n", &p, 'y', &a);
	printf("F1: %10x %c %2x\n\n", 16, 'y', 5);
	ft_printf("F2: %10x %c %2x\n\n", 16, 'y', 5);
	printf("F1: %32x %c %5x\n\n", 11, 'y', 5);
	ft_printf("F2: %32x %c %5x\n\n", 11, 'y', 5);
	printf("F1: %10d si\n\n", 60);
	ft_printf("F2: %10d si\n\n", 60);
	printf("F1: %32i\n\n", 777);
	ft_printf("F2: %32i\n\n", 777);
	printf("F1: %10u si\n\n", 80);
	ft_printf("F2: %10u si\n\n", 80);
	printf("F1: %32u\n\n", 888);
	ft_printf("F2: %32u\n\n", 888);
	printf("F1: %5u\n\n", -2);
	ft_printf("F2: %5u\n\n", -2);
	printf("\n*************** %s ***************\n\n", "Tests de ceros");
	printf("F1: %05d\n\n", 6);
	ft_printf("F2: %05d\n\n", 6);
	printf("F1: %05d %c %02d\n\n", 6, 'y', 7);
	ft_printf("F2: %05d %c %02d\n\n", 6, 'y', 7);
	printf("F1: %010d\n\n", 6);
	ft_printf("F2: %010d\n\n", 6);
	printf("F1: %0100d\n\n", 6);
	ft_printf("F2: %0100d\n\n", 6);
	printf("F1: %010d %c %02d\n\n", 60, 'y', 70);
	ft_printf("F2: %010d %c %02d\n\n", 60, 'y', 70);
	printf("F1: %032%, Hola\n\n");
	ft_printf("F2: %032%, Hola\n\n");
	printf("F1: %010x %02x\n\n", 16, 5);
	ft_printf("F2: %010x %02x\n\n", 16, 5);
	printf("F1: %032x %05x\n\n", 11, 5);
	ft_printf("F2: %032x %05x\n\n", 11, 5);
	printf("F1: %010d si\n\n", 60);
	ft_printf("F2: %010d si\n\n", 60);
	printf("F1: %032i\n\n", 777);
	ft_printf("F2: %032i\n\n", 777);
	printf("F1: %010u si\n\n", 80);
	ft_printf("F2: %010u si\n\n", 80);
	printf("F1: %032u\n\n", 888);
	ft_printf("F2: %032u\n\n", 888);
	printf("F1: %05u\n\n", -2);
	ft_printf("F2: %05u\n\n", -2);
	printf("\n*************** %s ***************\n\n", "Tests primer cero");
	printf("F1: %00d\n\n", 6);
	ft_printf("F2: %00d\n\n", 6);
	printf("F1: %0d\n\n", 6);
	ft_printf("F2: %0d\n\n", 6);
}
