/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 11:06:49 by dsantama          #+#    #+#             */
/*   Updated: 2020/08/27 11:16:45 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_control(const char *format, int i, va_list args)
{
	i++;
	if (format[i] == 'c' || format[i] == 'C')
		ft_printchar(args);
	if (format[i] == 's')
		ft_printstr(args);
	if (format[i] == 'p')
		ft_printptr(args);
	if (format[i] == 'd' || format[i] == 'D' || format[i] == 'i')
		ft_printint(args);
	if (format[i] == 'x' || format[i] == 'X')
		ft_printhex(format, i, args);
	if (format[i] == '%')
		ft_putchar('%');
}
