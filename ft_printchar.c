/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 08:58:20 by dsantama          #+#    #+#             */
/*   Updated: 2020/08/17 12:48:26 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printchar(const char *format, int i, va_list args)
{
	unsigned char c;

	if (format[i] == '%')
		ft_putchar('%');
	else
	{
		c = (unsigned char)va_arg(args, int);
		ft_putchar(c);
	}
}
