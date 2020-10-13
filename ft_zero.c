/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 09:34:34 by dsantama          #+#    #+#             */
/*   Updated: 2020/10/13 09:55:20 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		putzeros(int num, t_data *data)
{
	int		count;

	count = 0;
	if (data->pr == '1')
	{
		while (count < (num - data->len))
		{
			ft_putchar(' ');
			count++;
			data->printed++;
		}
	}
	else
		while (count < (num - data->len))
		{
			ft_putchar('0');
			count++;
			data->printed++;
		}
	if (data->hzero != 0)
		putpreczero(data);
}

static void		putspaces(int num, t_data *data)
{
	int count;

	count = 0;
	while (count < (num - data->len))
	{
		ft_putchar(' ');
		count++;
		data->printed++;
	}
	if (data->hzero != 0)
		putpreczero(data);
}

static t_data	*ft_val(const char *format, int i, va_list args, t_data *data)
{
	if (format[i] == '0')
	{
		ft_control(format, i, args, data);
		data->total += 2;
		return (data);
	}
	if (data->digits > 1)
	{
		i += (data->digits - 1);
		data->zero = (data->digits + 1);
	}
	else
		data->zero = 2;
	if (data->ch == '0' && data->negative == '0')
		ft_putstr(data->str);
	if (data->ch == '0' && data->negative == '1')
		ft_putstrn(data->str);
	if (data->ch != '0')
		ft_putchar(data->mychar);
	data->total += data->zero;
	return (data);
}

t_data			*ft_zero(const char *format, int i, va_list args, t_data *data)
{
	i++;
	data->from_zero = '1';
	after_flag_zero(format, i, args, data);
	if (data->from_zero == '0')
		return (data);
	if (format[i] == '-')
	{
		ft_dash(format, i, args, data);
		data->total += 1;
		return (data);
	}
	if (format[i] == '0')
	{
		ft_val(format, i, args, data);
		return (data);
	}
	if (format[i] >= '1' && format[i] <= '9')
		ft_putzeros(format, i, args, data);
	if (format[i] == '*')
	{
		ft_starz(format, i, args, data);
		return (data);
	}
	ft_val(format, i, args, data);
	return (data);
}

t_data			*ft_starz(const char *format, int i, va_list args, t_data *data)
{
	int		num;

	data->digits = 1;
	num = va_arg(args, int);
	if (num < 0)
	{
		num *= -1;
		data->negstar = '1';
	}
	ft_width(format, i, args, data);
	if (data->negstar == '0')
		putzeros(num, data);
	if (data->ch == '0' && data->negative == '1')
		ft_putstrn(data->str);
	if (data->ch == '0' && data->negative == '0')
		ft_putstr(data->str);
	if (data->ch != '0')
		ft_putchar(data->mychar);
	if (data->negstar == '1')
		putspaces(num, data);
	data->total += 2;
	return (data);
}
