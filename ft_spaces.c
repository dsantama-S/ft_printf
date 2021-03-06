/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spaces.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 11:58:33 by dsantama          #+#    #+#             */
/*   Updated: 2020/10/13 10:49:48 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static void			putspaces(int num, t_data *data)
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

static t_data		*print(int num, t_data *data)
{
	if (data->negstar == '0')
		putspaces(num, data);
	if (data->ptr != NULL)
		ft_putstr(data->ptr);
	if (data->ch == '0' && data->negative == '1')
		ft_putstrn(data->str);
	if (data->ch == '0' && data->negative == '0')
		ft_putstr(data->str);
	if (data->ch != '0')
		ft_putchar(data->mychar);
	if (data->negstar == '1')
		putspaces(num, data);
	return (data);
}

void				num_or_star(const char *format, int i, t_data *data)
{
	int n;

	n = 0;
	i += data->digits + 1;
	if (format[i] == '*')
		data->digits_prec = 1;
	else
	{
		n = copy_num(format, i);
		data->digits_prec = ef_number_digit(n);
	}
}

t_data				*ft_spaces(const char *format, int i, va_list args,
t_data *data)
{
	ft_putspaces(format, i, args, data);
	if (data->digits > 1)
	{
		i += (data->digits - 1);
		data->zero = data->digits;
	}
	else
		data->zero = 1;
	if (data->ptr != NULL)
		ft_putstr(data->ptr);
	if (data->ch == '0' && data->negative == '1')
		ft_putstrn(data->str);
	if (data->ch == '0' && data->negative == '0')
		ft_putstr(data->str);
	if (data->ch != '0')
		ft_putchar(data->mychar);
	data->total += data->zero;
	return (data);
}

t_data				*ft_stars(const char *format, int i, va_list args,
t_data *data)
{
	int		num;

	data->digits = 1;
	data->from_star = '1';
	num = va_arg(args, int);
	if (num < 0)
	{
		num *= -1;
		data->negstar = '1';
	}
	num_or_star(format, i, data);
	ft_width(format, i, args, data);
	print(num, data);
	data->total += 1;
	return (data);
}
