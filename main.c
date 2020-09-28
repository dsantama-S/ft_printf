/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:38:24 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/28 12:39:23 by dsantama         ###   ########.fr       */
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
	printf("F1: %s!\n\n", NULL);
	ft_printf("F2: %s!\n\n", NULL);
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
	printf("F1: direccion = %32p\n\n", &p);
	ft_printf("F2: direccion = %32p\n\n", &p);
	printf("F1: direccion = %5p %c %4p\n\n", &p, 'y', &a);
	ft_printf("F2: direccion = %5p %c %4p\n\n", &p, 'y', &a);
	printf("F1: %10x %c %2x\n\n", 16, 'y', 5);
	ft_printf("F2: %10x %c %2x\n\n", 16, 'y', 5);
	printf("F1: %32x %c %5x\n\n", 11, 'y', 5);
	ft_printf("F2: %32x %c %5x\n\n", 11, 'y', 5);
	printf("F1: %10d si\n\n", 60);
	printf("F1: %32i\n\n", 777);
	ft_printf("F2: %32i\n\n", 777);
	printf("F1: %10u si\n\n", 80);
	ft_printf("F2: %10u si\n\n", 80);
	printf("F1: %32u\n\n", 888);
	ft_printf("F2: %32u\n\n", 888);
	printf("F1: %5u\n\n", -2);
	ft_printf("F2: %5u\n\n", -2);
	printf("\n*************** %s ***************\n\n", "Tests de *");
	printf("F1: %*s %s\n\n", 10, "si", "no");
	ft_printf("F2: %*s %s\n\n", 10, "si", "no");
	printf("F1: %*s %s\n\n", 32, "siempre", "no");
	ft_printf("F2: %*s %s\n\n", 32, "siempre", "no");
	printf("F1: %*s %s\n\n", 5, "siempre si", "no");
	ft_printf("F2: %*s %s\n\n", 5, "siempre si", "no");
	printf("F1: %*c %c\n\n",5, 'N', 'O');
	ft_printf("F2: %*c %c\n\n", 5, 'N', 'O');
	printf("F1: %*c %c\n\n", 10, 'S', 'I');
	ft_printf("F2: %*c %c\n\n", 10, 'S', 'I');
	printf("F1: %*%, Hola\n\n", 32);
	ft_printf("F2: %*%, Hola\n\n", 32);
	printf("F1: direccion = %*p\n\n", 32, &p);
	ft_printf("F2: direccion = %*p\n\n", 32, &p);
	printf("F1: direccion = %*p %c %*p\n\n", 5, &p, 'y', 4, &a);
	ft_printf("F2: direccion = %*p %c %*p\n\n", 5, &p, 'y', 4, &a);
	printf("F1: %*x %c %*x\n\n", 10, 16, 'y', 2, 5);
	ft_printf("F2: %*x %c %*x\n\n", 10, 16, 'y', 2, 5);
	printf("F1: %*x %c %*x\n\n", 32, 11, 'y', 5, 5);
	ft_printf("F2: %*x %c %*x\n\n", 32, 11, 'y', 5, 5);
	printf("F1: %*d si\n\n",10, 60);
	ft_printf("F2: %*d si\n\n",10, 60);
	printf("F1: %*i\n\n", 32, 777);
	ft_printf("F2: %*i\n\n", 32, 777);
	printf("F1: %*i\n\n", 5, 3);
	ft_printf("F2: %*i\n\n", 5, 3);
	printf("F1: %*u si\n\n", 10, 80);
	ft_printf("F2: %*u si\n\n", 10, 80);
	printf("F1: %*u\n\n", 32, 888);
	ft_printf("F2: %*u\n\n", 32, 888);
	printf("F1: %*u\n\n", 5, -2);
	ft_printf("F2: %*u\n\n", 5, -2);
	printf("F1: %0*i\n\n", 32, 777);
	ft_printf("F2: %0*i\n\n", 32, 777);
	printf("F1: %0*i\n\n", 5, 3);
	ft_printf("F2: %0*i\n\n", 5, 3);
	printf("F1: %0*u si\n\n", 10, 80);
	ft_printf("F2: %0*u si\n\n", 10, 80);
	printf("F1: %0*u\n\n", 32, 888);
	ft_printf("F2: %0*u\n\n", 32, 888);
	printf("F1: %0*u\n\n", 5, -2);
	ft_printf("F2: %0*u\n\n", 5, -2);
	printf("F1: %0*x %c %0*x\n\n", 10, 16, 'y', 2, 5);
	ft_printf("F2: %0*x %c %0*x\n\n", 10, 16, 'y', 2, 5);
	printf("F1: %0*x %c %0*x\n\n", 32, 11, 'y', 5, 5);
	ft_printf("F2: %0*x %c %0*x\n\n", 32, 11, 'y', 5, 5);
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
	printf("\n*************** %s ***************\n\n", "Tests de precision");
	printf("F1: %.4s\n\n", "abcdef");
	ft_printf("F2: %.4s\n\n", "abcdef");
	printf("F1: %.4s\n\n", "CARLOS");
	ft_printf("F2: %.4s\n\n", "CARLOS");
	printf("F1: %.4s y %.3s\n\n", "CARLOS", "JUAN");
	ft_printf("F2: %.4s y %.3s\n\n", "CARLOS", "JUAN");
	printf("F1: %.8s\n\n", "CARLOS");
	ft_printf("F2: %.8s\n\n", "CARLOS");
	printf("F1: %.4i\n\n", 1987);
	ft_printf("F2: %.4i\n\n", 1987);
	printf("F1: %.4i %.5i\n\n", 1987, 2020);
	ft_printf("F2: %.4i %.5i\n\n", 1987, 2020);
	printf("F1: %.4u\n\n", 12345);
	ft_printf("F2: %.4u\n\n", 12345);
	printf("F1: %.4x\n\n", 12345678);
	ft_printf("F2: %.4x\n\n", 12345678);
	printf("F1: %.6i\n\n", 1987);
	ft_printf("F2: %.6i\n\n", 1987);
	printf("F1: %.4u\n\n", 12);
	ft_printf("F2: %.4u\n\n", 12);
	printf("F1: %.5x\n\n", 1234);
	ft_printf("F2: %.5x\n\n", 1234);
	printf("F1: %.*s\n\n", 4, "UVWXYZ");
	ft_printf("F2: %.*s\n\n", 4, "UVWXYZ");
	printf("F1: %.*s\n\n", 4, "JUANITO");
	ft_printf("F2: %.*s\n\n", 4, "JUANITO");
	printf("F1: %.*i\n\n", 4, 1977);
	ft_printf("F2: %.*i\n\n", 4, 1977);
	printf("F1: %.*i\n\n", 10, 1977);
	ft_printf("F2: %.*i\n\n", 10, 1977);
	printf("F1: %.*u\n\n", 4, 12345);
	ft_printf("F2: %.*u\n\n", 4, 12345);
	printf("F1: %.*x\n\n", 4, 12345678);
	ft_printf("F2: %.*x\n\n", 4, 12345678);
	printf("F1: %.*i\n\n", 6, 2011);
	ft_printf("F2: %.*i\n\n", 6, 2011);
	printf("F1: %.*u\n\n", 4, 29);
	ft_printf("F2: %.*u\n\n", 4, 29);
	printf("F1: %.*x\n\n", 4, 1234);
	ft_printf("F2: %.*x\n\n", 4, 1234);
	printf("F1: %10.4i\n\n", 1987);
	ft_printf("F2: %10.4i\n\n", 1987);
	printf("F1: %10.6i\n\n", 1987);
	ft_printf("F2: %10.6i\n\n", 1987);
	printf("F1: %10.6i %.6i\n\n", 1987, 2020);
	ft_printf("F2: %10.6i %.6i\n\n", 1987, 2020);
	printf("F1: %10.4u\n\n", 2001);
	ft_printf("F2: %10.4u\n\n", 2001);
	printf("F1: %10.6u\n\n", 2001);
	ft_printf("F2: %10.6u\n\n", 2001);
	printf("F1: %10.4x\n\n", 1987);
	ft_printf("F2: %10.4x\n\n", 1987);
	printf("F1: %10.6x\n\n", 1987);
	ft_printf("F2: %10.6x\n\n", 1987);
	printf("F1: %.4i\n\n", -3);
	ft_printf("F2: %.4i\n\n", -3);
	printf("F1: %.1i\n\n", -3);
	ft_printf("F2: %.1i\n\n", -3);
	printf("F1: %.2i\n\n", -3);
	ft_printf("F2: %.2i\n\n", -3);
	printf("F1: %10.4i\n\n", -3);
	ft_printf("F2: %10.4i\n\n", -3);
	printf("F1: %10.1i\n\n", -3);
	ft_printf("F2: %10.1i\n\n", -3);
	printf("F1: %10.2i\n\n", -3);
	ft_printf("F2: %10.2i\n\n", -3);
	printf("F1: %10.4i\n\n", -29878);
	ft_printf("F2: %10.4i\n\n", -29878);
	printf("F1: %10.1i\n\n", -1987);
	ft_printf("F2: %10.1i\n\n", -1987);
	printf("F1: %10.2i\n\n", -30);
	ft_printf("F2: %10.2i\n\n", -30);
	printf("F1: %10.4i\n\n", -29872228);
	ft_printf("F2: %10.4i\n\n", -29872228);
	printf("F1: %10.2i\n\n", -1987);
	ft_printf("F2: %10.2i\n\n", -1987);
	printf("F1: %10.87i\n\n", -30);
	ft_printf("F2: %10.87i\n\n", -30);
	printf("F1: %20.11u\n\n", -3);
	ft_printf("F2: %20.11u\n\n", -3);
	printf("F1: %20.4u\n\n", -3);
	ft_printf("F2: %20.4u\n\n", -3);
	printf("F1: %10.4x\n\n", -3);
	ft_printf("F2: %10.4x\n\n", -3);
	printf("F1: %10.9x\n\n", -3);
	ft_printf("F2: %10.9x\n\n", -3);
	printf("F1: %20.10x\n\n", -3);
	ft_printf("F2: %20.10x\n\n", -3);
	printf("F1: %10.2x\n\n", -3);
	ft_printf("F2: %10.2x\n\n", -3);
	printf("F1: %10.1x\n\n", -3);
	ft_printf("F2: %10.1x\n\n", -3);
	printf("F1: %.4i\n\n", -2372);
	ft_printf("F2: %.4i\n\n", -2372);
	printf("F1: %8.3i\n\n", -8473);
	ft_printf("F2: %8.3i\n\n", -8473);
	printf("F1: %9.2i\n\n", -1987);
	ft_printf("F2: %9.2i\n\n", -1987);
	printf("F1: %100.2i\n\n", -1987);
	ft_printf("F2: %100.2i\n\n", -1987);
	printf("F1: %1000.2i\n\n", -1987);
	ft_printf("F2: %1000.2i\n\n", -1987);
	printf("F1: %010.4i\n\n", 1987);
	ft_printf("F2: %010.4i\n\n", 1987);
	printf("F1: %010.6i\n\n", 1987);
	ft_printf("F2: %010.6i\n\n", 1987);
	printf("F1: %010.6i %.6i\n\n", 1987, 2020);
	ft_printf("F2: %010.6i %.6i\n\n", 1987, 2020);
	printf("F1: %010.4u\n\n", 2001);
	ft_printf("F2: %010.4u\n\n", 2001);
	printf("F1: %010.6u\n\n", 2001);
	ft_printf("F2: %010.6u\n\n", 2001);
	printf("F1: %010.4x\n\n", 1987);
	ft_printf("F2: %010.4x\n\n", 1987);
	printf("F1: %010.6x\n\n", 1987);
	ft_printf("F2: %010.6x\n\n", 1987);
	printf("F1: %08.3i\n\n", -8473);
	ft_printf("F2: %08.3i\n\n", -8473);
	printf("F1: %09.2i\n\n", -1987);
	ft_printf("F2: %09.2i\n\n", -1987);
	printf("F1: %0100.2i\n\n", -1987);
	ft_printf("F2: %0100.2i\n\n", -1987);
	printf("F1: %0100.12i\n\n", -1987);
	ft_printf("F2: %0100.12i\n\n", -1987);
	printf("F1: %10d si\n\n", 60);
	ft_printf("F2: %10d si\n\n", 60);
	printf("F1: %10d si\n\n", -60);
	ft_printf("F2: %10d si\n\n", -60);
	printf("F1: %010d si\n\n", -60);
	ft_printf("F2: %010d si\n\n", -60);
	printf("F1: %020d si\n\n", -602);
	ft_printf("F2: %020d si\n\n", -602);
	printf("F1: %010x si\n\n", -60);
	ft_printf("F2: %010x si\n\n", -60);
	printf("F1: %010u si\n\n", -60);
	ft_printf("F2: %010u si\n\n", -60);
	printf("F1: %10.*i\n\n", 4, 1987);
	ft_printf("F2: %10.*i\n\n", 4, 1987);
	printf("F1: %10.*i\n\n", 6, 1987);
	ft_printf("F2: %10.*i\n\n", 6, 1987);
	printf("F1: %10.*i\n\n", 10, 1987);
	ft_printf("F2: %10.*i\n\n", 10, 1987);
	printf("F1: %10.*i %.*i\n\n", 10, 1987, 6, 2020);
	ft_printf("F2: %10.*i %.*i\n\n", 10, 1987, 6, 2020);
	printf("F1: %10.*u\n\n", 4, 2001);
	ft_printf("F2: %10.*u\n\n", 4, 2001);
	printf("F1: %10.*u\n\n", 6, 2001);
	ft_printf("F2: %10.*u\n\n", 6, 2001);
	printf("F1: %10.*x\n\n", 4, 1987);
	ft_printf("F2: %10.*x\n\n", 4, 1987);
	printf("F1: %10.*x\n\n", 6, 1987);
	ft_printf("F2: %10.*x\n\n", 6, 1987);
	printf("F1: %9.*i\n\n", 2, -1987);
	ft_printf("F2: %9.*i\n\n", 2, -1987);
	printf("F1: %100.*i\n\n", 5, -1987);
	ft_printf("F2: %100.*i\n\n", 5, -1987);
	printf("F1: %10.*i\n\n", 4, 1987);
	ft_printf("F2: %10.*i\n\n", 4, 1987);
	printf("F1: %*.6i\n\n", 6, 1987);
	ft_printf("F2: %*.6i\n\n", 6, 1987);
	printf("F1: %*.6i\n\n", 10, 1987);
	ft_printf("F2: %*.6i\n\n", 10, 1987);
	printf("F1: %*.6u\n\n", 6, 1987);
	ft_printf("F2: %*.6u\n\n", 6, 1987);
	printf("F1: %*.6x\n\n", 6, 1987);
	ft_printf("F2: %*.6x\n\n", 6, 1987);
	printf("F1: %*.1i\n\n", 10, -5);
	ft_printf("F2: %*.1i\n\n", 10, -5);
	printf("F1: %*.2i\n\n", 10, -3);
	ft_printf("F2: %*.2i\n\n", 10, -3);
	printf("F1: %*.4i\n\n", 10, -29878);
	ft_printf("F2: %*.4i\n\n", 10, -29878);
	printf("F1: %*.1i\n\n", 10, -1987);
	ft_printf("F2: %*.1i\n\n", 10, -1987);
	printf("F1: %*.2i\n\n", 10, -30);
	ft_printf("F2: %*.2i\n\n", 10, -30);
	printf("F1: %*.4i\n\n", 10, -29872228);
	ft_printf("F2: %*.4i\n\n", 10, -29872228);
	printf("F1: %*.2i\n\n", 10, -1987);
	ft_printf("F2: %*.2i\n\n", 10, -1987);
	printf("F1: %*.4u\n\n", 20, -3);
	ft_printf("F2: %*.4u\n\n", 20, -3);
	printf("F1: %*.4x\n\n", 10, -3);
	ft_printf("F2: %*.4x\n\n", 10, -3);
	printf("F1: %*.9x\n\n", 10, -3);
	ft_printf("F2: %*.9x\n\n", 10, -3);
	printf("F1: %*.2x\n\n", 10, -3);
	ft_printf("F2: %*.2x\n\n", 10, -3);
	printf("F1: %*.1x\n\n", 10, -3);
	ft_printf("F2: %*.1x\n\n", 10, -3);;
	printf("F1: %*.10x\n\n", 20, -3);
	ft_printf("F2: %*.10x\n\n", 20, -3);
	printf("F1: %*.11u\n\n", 20, -3);
	ft_printf("F2: %*.11u\n\n", 20, -3);
	printf("F1: %*.87i\n\n", 10, -30);
	ft_printf("F2: %*.87i\n\n", 10, -30);
	printf("F1: %*.*i\n\n", 10, 87, -30);
	ft_printf("F2: %*.*i\n\n", 10, 87, -30);
	printf("F1: %*.*x\n\n", 10, 1, -30);
	ft_printf("F2: %*.*x\n\n", 10, 1, -30);
	printf("F1: %0*.*i\n\n", 10, 1, -30);
	ft_printf("F2: %0*.*i\n\n", 10, 1, -30);
	printf("F1: %0*i\n\n", 10, 30);
	ft_printf("F2: %0*i\n\n", 10, 30);
	printf("F1: %0*.3i\n\n", 10, 30);
	ft_printf("F2: %0*.3i\n\n", 10, 30);
	printf("F1: %.3s\n\n", "MARCOS");
	ft_printf("F2: %.3s\n\n", "MARCOS");
	printf("F1: %10.4s\n\n", "FEDERICO");
	ft_printf("F2: %10.4s\n\n", "FEDERICO");
	printf("F1: %20.4s\n\n", NULL);
	ft_printf("F2: %20.4s\n\n", NULL);
	printf("F1: %*.2s\n\n", 3, "FEDERICO");
	ft_printf("F2: %*.2s\n\n", 3, "FEDERICO");
	printf("F1: %*.12s\n\n", 3, "FEDERICO");
	ft_printf("F2: %*.12s\n\n", 3, "FEDERICO");
	printf("F1: %3.7s%7.7s\n\n", "hello", "world");
	ft_printf("F2: %3.7s%7.7s\n\n", "hello", "world");
	printf("F1: %.04s\n\n", "JUANITO");
	ft_printf("F2: %.04s\n\n", "JUANITO");
	printf("\n*************** %s ***************\n\n", "Tests primer cero");
	printf("F1: %00d\n\n", 6);
	ft_printf("F2: %00d\n\n", 6);
	printf("F1: %0d\n\n", 6);
	ft_printf("F2: %0d\n\n", 6);
	printf("\n*************** %s ***************\n\n", "Tests precision con 0 o sin nada");
	printf("F1: %5.0i\n\n", 50);
	ft_printf("F2: %5.0i\n\n", 50);
	printf("F1: %5.i\n\n", 50);
	ft_printf("F2: %5.i\n\n", 50);
	printf("F1: %.0i\n\n", 50);
	ft_printf("F2: %.0i\n\n", 50);
}
