/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 08:36:54 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/28 10:59:45 by dsantama         ###   ########.fr       */
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

static int	copy_num(const char *format, int i)
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

void		ft_spec(const char *format, int i, va_list args, t_data *data)
{
	i += data->digits;
	if (format[i] == 'c' || format[i] == 'C')
		ft_printchar(args);
	if (format[i] == 's')
		ft_sprintstr(args, data);
	if (format[i] == 'p')
		ft_printptr(args);
	if (format[i] == 'd' || format[i] == 'D' || format[i] == 'i')
		ft_sprintint(args, data);
	if (format[i] == 'u' || format[i] == 'U')
		ft_sprintuns(args, data);
	if (format[i] == 'x' || format[i] == 'X')
		ft_sprinthex(format, i, args, data);
	if (format[i] == '%')
		ft_putchar('%');
}

t_data		*ft_precision(const char *format, int i, va_list args, t_data *data)
{
	i++;
	if (format[i] == '0')
	{
		data->total += 1;
		i++;
	}
	if (format[i] == ('i' | 'u' | 'x' | 's'))
		data->total += 1;
	if (format[i] >= '1' && format[i] <= '9')
	{
		data->prec = copy_num(format, i);
		data->digits = ef_number_digit(data->prec);
		ft_spec(format, i, args, data);
		if (data->digits > 1)
			data->zero = data->digits;
		else
			data->zero = 2;
	}
	if (format[i] == '*')
	{
		ft_starpr(format, i, args, data);
		return (data);
	}
	data->total += data->zero;
	return (data);
}

t_data		*ft_starpr(const char *format, int i, va_list args, t_data *data)
{
	data->prec = va_arg(args, int);
	data->digits = 1;
	ft_spec(format, i, args, data);
	data->total += 2;
	return (data);
}
