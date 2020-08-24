/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:38:24 by dsantama          #+#    #+#             */
/*   Updated: 2020/08/17 11:01:23 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	char c;
	char *str;
	char *str2;
	int mem1;

	c = 'a';
	str = "Mbappe";
	str2 = "Neymar";
	printf("Original: Hola\n\n");
	ft_printf("Mi funcion: Hola\n\n");
	printf("Original: %c, Hola\n\n", 'a');
	ft_printf("Mi funcion: %c, Hola\n\n", 'a');
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
	ft_printf("Mi funcion: %s o %s\n\n", str, str2);
	printf("Original: %s %c %s\n\n", str, 'y', str2);
	ft_printf("Mi funcion: %s %c %s\n\n", str, 'y', str2);
	printf("Original: direccion = %p\n\n", mem1);
	ft_printf("Mi funcion: direccion = %p\n\n", mem1);
}
