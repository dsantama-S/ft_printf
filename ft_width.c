/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 13:12:11 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/28 09:57:41 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

void		ft_width(const char *format, int i, va_list args, t_data *data)
{
	i += data->digits;
	if (format[i] == 's')
		ft_wprintstr(args, data);
	if (format[i] == 'd' || format[i] == 'D' || format[i] == 'i')
		ft_wprintint(args, data);
	if (format[i] == 'u' || format[i] == 'U')
		ft_wprintuns(args, data);
	if (format[i] == 'c' || format[i] == 'C')
		ft_wprintchar(args, data);
	if (format[i] == 'p')
		ft_wprintptr(args, data);
	if (format[i] == 'x' || format[i] == 'X')
		ft_wprinthex(format, i, args, data);
	if (format[i] == '%')
		ft_wprintper(data);
	if (format[i] == '.')
	{
		data->pr = '1';
		ft_precision(format, i, args, data);
	}
}
