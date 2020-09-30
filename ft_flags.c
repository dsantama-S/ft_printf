/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 09:31:28 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/30 13:24:36 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_flags(const char *format, int i, va_list args, t_data *data)
{
	if (format[i] == '0')
		ft_zero(format, i, args, data);
	if (format[i] >= '1' && format[i] <= '9')
		ft_spaces(format, i, args, data);
	if (format[i] == '*')
		ft_stars(format, i, args, data);
	if (format[i] == '.')
		ft_precision(format, i, args, data);
	if (format[i] == '-')
		ft_dash(format, i, args, data);
}

t_data		*error(const char *format, int i, t_data *data)
{
	if (format[i] >= 65 && format[i] <= 122)
	{
		if (format[i] == 's')
			data->total += 1;
		if (format[i] == 'u' || format[i] == 'U')
			data->total += 1;
		if (format[i] == 'x' || format[i] == 'X')
			data->total += 1;
		if (format[i] == 'o' || format[i] == 'O')
			data->total += 1;
		if (format[i] == 'd' || format[i] == 'D' || format[i] == 'i')
			data->total += 1;
		data->error = '1';
	}
	return (data);
}

t_data		*error_prec_zeros(const char *format, int i, t_data *data)
{
	if (format[i] == '0')
	{
		data->total += 1;
		i++;
		data->count++;
		if (format[i] == '0')
			error_prec_zeros(format, i, data);
	}
	return (data);
}

t_data		*after_flag(const char *format, int i, va_list args, t_data *data)
{
	if (format[i] >= 65 && format[i] <= 122)
	{
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
		if (format[i] == 'o' || format[i] == 'O')
			ft_printoct(args);
		if (format[i] == '%')
			ft_putchar('%');
		data->total += 1;
		data->from_zero = '0';
	}
	return (data);
}

t_data		*little_space(const char *format, int i, t_data *data)
{
	if (format[i] == ' ')
	{
		data->space = 1;
		ft_putchar(' ');
	}
	return (data);
}
