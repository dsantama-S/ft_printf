/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 09:34:34 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/28 12:00:53 by dsantama         ###   ########.fr       */
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
		}
	}
	else
		while (count < (num - data->len))
		{
			ft_putchar('0');
			count++;
		}
}

static t_data	*ft_val(int i, t_data *data)
{
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
		ft_putchar(data->ch);
	data->total += data->zero;
	return (data);
}

t_data			*ft_zero(const char *format, int i, va_list args, t_data *data)
{
	i++;
	data->from_zero = '1';
	if (format[i] == '0')
	{
		ft_control(format, i, args, data);
		data->total += 2;
		return (data);
	}
	if (format[i] >= '1' && format[i] <= '9')
		ft_putzeros(format, i, args, data);
	if (format[i] == '*')
	{
		ft_starz(format, i, args, data);
		return (data);
	}
	ft_val(i, data);
	return (data);
}

t_data			*ft_starz(const char *format, int i, va_list args, t_data *data)
{
	int		num;

	num = va_arg(args, int);
	ft_width(format, i, args, data);
	putzeros(num, data);
	if (!(!data->szero))
		ft_putstr(data->szero);
	if (data->ch == '0')
		ft_putstr(data->str);
	if (data->ch != '0')
		ft_putchar(data->ch);
	data->total += 2;
	return (data);
}
