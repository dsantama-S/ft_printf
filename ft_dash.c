/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dash.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:01:48 by dsantama          #+#    #+#             */
/*   Updated: 2020/10/13 10:47:27 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_data	*ft_val(const char *format, int i, va_list args, t_data *data)
{
	ft_width(format, i, args, data);
	if (data->hzero != 0)
		putpreczero(data);
	if (data->digits > 1)
	{
		i += (data->digits - 1);
		data->zero = (data->digits + 1);
	}
	else
		data->zero = 2;
	if (data->ptr != NULL)
		ft_putstr(data->ptr);
	if (data->ch == '0' && data->negative == '0')
		ft_putstr(data->str);
	if (data->ch == '0' && data->negative == '1')
		ft_putstrn(data->str);
	if (data->ch != '0')
		ft_putchar(data->mychar);
	data->total += data->zero;
	return (data);
}

t_data			*ft_stardash(const char *format, int i, va_list args,
t_data *data)
{
	int		num;
	int		count;

	count = 0;
	data->digits = 1;
	num = va_arg(args, int);
	if (num < 0)
		num *= -1;
	num_or_star(format, i, data);
	ft_val(format, i, args, data);
	while (count < (num - data->len))
	{
		ft_putchar(' ');
		count++;
		data->printed++;
	}
	return (data);
}

static t_data	*dash_num(const char *format, int i, va_list args, t_data *data)
{
	int count;
	int num;

	count = 0;
	num = copy_num(format, i);
	data->digits = ef_number_digit(num);
	data->digits_prec = data->digits;
	ft_val(format, i, args, data);
	while (count < (num - data->len))
	{
		ft_putchar(' ');
		count++;
		data->printed++;
	}
	return (data);
}

t_data			*ft_dash(const char *format, int i, va_list args, t_data *data)
{
	i++;
	if (format[i] == '0')
	{
		data->total += 1;
		i++;
		error_prec_zeros(format, i, data);
		i += data->count;
	}
	after_flag(format, i, args, data);
	if (format[i] >= '1' && format[i] <= '9')
		dash_num(format, i, args, data);
	if (format[i] == '*')
		ft_stardash(format, i, args, data);
	if (format[i] == '.')
	{
		ft_precision(format, i, args, data);
		data->total += 1;
	}
	return (data);
}
