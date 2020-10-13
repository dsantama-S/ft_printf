/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 08:36:54 by dsantama          #+#    #+#             */
/*   Updated: 2020/10/13 10:46:56 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_data		*ft_numpr(const char *format, int i, va_list args,
t_data *data)
{
	data->prec = copy_num(format, i);
	data->digits = ef_number_digit(data->prec);
	ft_spec(format, i, args, data);
	if (data->digits > 1)
	{
		if (data->from_star == '1' || data->digits_prec > 1)
			data->zero = data->digits;
		else
			data->zero = data->digits + 1;
	}
	else
		data->zero = 2;
	return (data);
}

void				ft_spec(const char *format, int i, va_list args,
t_data *data)
{
	i += data->digits;
	if (format[i] == 'c' || format[i] == 'C')
		ft_printchar(args, data);
	if (format[i] == 's')
		ft_sprintstr(args, data);
	if (format[i] == 'p')
	{
		if (data->from_star == '1')
			ft_printptr(args, data);
		else
			ft_sprintptr(args, data);
	}
	if (format[i] == 'd' || format[i] == 'D' || format[i] == 'i')
		ft_sprintint(args, data);
	if (format[i] == 'u' || format[i] == 'U')
		ft_sprintuns(args, data);
	if (format[i] == 'x' || format[i] == 'X')
		ft_sprinthex(format, i, args, data);
	if (format[i] == 'o' || format[i] == 'O')
		ft_sprintoct(args, data);
	if (format[i] == '%')
	{
		data->printed++;
		ft_putchar('%');
	}
}

t_data				*ft_precision(const char *format, int i, va_list args,
t_data *data)
{
	i++;
	if (format[i] == '0')
	{
		data->total += 1;
		i++;
		error_prec_zeros(format, i, data);
		i += data->count;
	}
	error(format, i, data);
	if (data->error == '1')
	{
		if (data->pr != '1' && data->ptr != NULL)
			ft_putstr(data->ptr);
		return (data);
	}
	if (format[i] >= '1' && format[i] <= '9')
		ft_numpr(format, i, args, data);
	if (format[i] == '*')
	{
		ft_starpr(format, i, args, data);
		return (data);
	}
	data->total += data->zero;
	return (data);
}

t_data				*ft_starpr(const char *format, int i, va_list args,
t_data *data)
{
	data->from_star = '1';
	data->prec = va_arg(args, int);
	data->digits = 1;
	ft_spec(format, i, args, data);
	data->total += 2;
	return (data);
}
