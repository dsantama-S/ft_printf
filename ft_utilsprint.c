/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilsprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 11:21:09 by dsantama          #+#    #+#             */
/*   Updated: 2020/10/01 12:55:22 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ef_number_digit(int n)
{
	if (n > -10 && n < 10)
		return (1);
	else
		return (1 + ef_number_digit(n / 10));
}

int			copy_num(const char *format, int i)
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

t_data		*ft_putzeros(const char *format, int i, va_list args, t_data *data)
{
	int		num;
	int		count;

	count = 0;
	num = copy_num(format, i);
	data->digits = ef_number_digit(num);
	data->digits_prec = data->digits;
	ft_width(format, i, args, data);
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
	if (!(!data->szero))
		ft_putstr(data->szero);
	return (data);
}

t_data		*ft_putspaces(const char *format, int i, va_list args, t_data *data)
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
	}
	if (!(!data->szero))
		ft_putstr(data->szero);
	return (data);
}

t_data		*ft_percent(const char *format, int i, va_list args, t_data *data)
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
