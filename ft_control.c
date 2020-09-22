/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 11:06:49 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/22 08:54:18 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_control(const char *format, int i, va_list args, t_data *data)
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
	if (format[i] == 'u' || format[i] == 'U')
		ft_printuns(args);
	if (format[i] == 'x' || format[i] == 'X')
		ft_printhex(format, i, args);
	if (format[i] == '%')
		ft_putchar('%');
	data->total = 2;
	if ((format[i] >= '0' && format[i] <= '9') ||
	(format[i] == '.' || format[i] == '-' || format[i] == '*'))
		ft_flags(format, i, args, data);
}
