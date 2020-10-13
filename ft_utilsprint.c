/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilsprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 11:21:09 by dsantama          #+#    #+#             */
/*   Updated: 2020/10/13 10:57:58 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static t_data		*from_width(int count, int num, t_data *data)
{
	while (count < (num - data->len))
	{
		ft_putchar(' ');
		count++;
		data->printed++;
	}
	return (data);
}

int					copy_num(const char *format, int i)
{
	char	*str;
	int		n;
	int		num;

	n = 0;
	num = 0;
	str = (char *)malloc(ft_strlen(format));
	while (format[i] != (format[i] >= '0' && format[i] <= '9'))
	{
		str[n] = format[i];
		n++;
		i++;
	}
	num = ft_atoi(str);
	free(str);
	return (num);
}

t_data				*ft_putzeros(const char *format, int i, va_list args,
t_data *data)
{
	int		num;
	int		count;

	count = 0;
	num = copy_num(format, i);
	data->digits = ef_number_digit(num);
	data->digits_prec = data->digits;
	ft_width(format, i, args, data);
	if (data->pr == '1')
		from_width(count, num, data);
	else
		while (count < (num - data->len))
		{
			ft_putchar('0');
			count++;
			data->printed++;
		}
	if (data->hzero != 0)
		putpreczero(data);
	return (data);
}

t_data				*ft_putspaces(const char *format, int i, va_list args,
t_data *data)
{
	int		num;
	int		count;

	count = 0;
	num = copy_num(format, i);
	data->digits = ef_number_digit(num);
	data->digits_prec = data->digits;
	ft_width(format, i, args, data);
	while (count < (num - data->len))
	{
		ft_putchar(' ');
		count++;
		data->printed++;
	}
	if (data->hzero != 0)
		putpreczero(data);
	return (data);
}

t_data				*ft_percent(const char *format, int i, va_list args,
t_data *data)
{
	static int		n;

	n = 0;
	data->percent = 0;
	if (format[i] == '%')
	{
		ft_control(format, i, args, data);
		i += data->total;
		n += data->total;
		if (format[i] == '%')
		{
			ft_percent(format, i, args, data);
			n += data->total;
		}
		data->percent = n;
	}
	return (data);
}
