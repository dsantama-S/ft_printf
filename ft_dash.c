/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dash.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:01:48 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/28 14:37:21 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		ef_number_digit(int n)
{
	if (n > -10 && n < 10)
		return (1);
	else
		return (1 + ef_number_digit(n / 10));
}

static t_data	*ft_val(const char *format, int i, va_list args, t_data *data)
{
	ft_width(format, i, args, data);
	if (!(!data->szero))
		ft_putstr(data->szero);
	if (data->digits > 1)
	{
		i += (data->digits - 1);
		data->zero = (data->digits + 1);
	}
	else
		data->zero = 2;
	if (data->mem != '0')
		ft_putstr(data->ptr);
	if (data->ch == '0' && data->negative == '0')
		ft_putstr(data->str);
	if (data->ch == '0' && data->negative == '1')
		ft_putstrn(data->str);
	if (data->ch != '0')
		ft_putchar(data->ch);
	data->total += data->zero;
	return (data);
}

static t_data	*ft_stardash(const char *format, int i, va_list args,
t_data *data)
{
	int		num;
	int		count;

	count = 0;
	data->digits = 1;
	num = va_arg(args, int);
	num_or_star(format, i, data);
	ft_val(format, i, args, data);
	while (count < (num - data->len))
	{
		ft_putchar(' ');
		count++;
	}
	return (data);
}

t_data			*ft_dash(const char *format, int i, va_list args, t_data *data)
{
	int count;
	int num;

	i++;
	count = 0;
	if (format[i] == '0')
	{
		i++;
		data->total += 1;
	}
	if (format[i] >= '1' && format[i] <= '9')
	{
		num = copy_num(format, i);
		data->digits = ef_number_digit(num);
		data->digits_prec = data->digits;
		ft_val(format, i, args, data);
		while (count < (num - data->len))
		{
			ft_putchar(' ');
			count++;
		}
	}
	if (format[i] == '*')
		ft_stardash(format, i, args, data);
	return (data);
}
