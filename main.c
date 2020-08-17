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
	printf("Hola\n");
	ft_printf("Hola\n");
	printf("%c, Hola\n", 'a');
	ft_printf("%c, Hola\n", 'a');
}
