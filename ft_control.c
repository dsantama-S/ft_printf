/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 11:06:49 by dsantama          #+#    #+#             */
/*   Updated: 2020/10/08 13:28:50 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_control(const char *format, int i, va_list args, t_data *data)
{
	i++;
	little_space(format, i, data);
	i += data->space;
	if (format[i] == 'c' || format[i] == 'C')
		ft_printchar(args, data);
	if (format[i] == 's')
		ft_printstr(args, data);
	if (format[i] == 'p')
		ft_printptr(args, data);
	if (format[i] == 'd' || format[i] == 'D' || format[i] == 'i')
		ft_printint(args, data);
	if (format[i] == 'u' || format[i] == 'U')
		ft_printuns(args, data);
	if (format[i] == 'x' || format[i] == 'X')
		ft_printhex(format, i, args, data);
	if (format[i] == 'o' || format[i] == 'O')
		ft_printoct(args, data);
	if (format[i] == '%')
	{
		data->printed++;
		ft_putchar('%');
	}
	data->total = 2 + data->space;
	if ((format[i] >= '0' && format[i] <= '9') ||
	(format[i] == '.' || format[i] == '-' || format[i] == '*'))
		ft_flags(format, i, args, data);
}
