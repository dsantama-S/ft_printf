/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:38:24 by dsantama          #+#    #+#             */
/*   Updated: 2020/08/12 12:47:02 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	printf("Hola\n");
	ft_printf("Hola\n");
	printf("Hol%a\n");
	ft_printf("Hola%a\n");
}
