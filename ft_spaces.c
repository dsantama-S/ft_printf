/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spaces.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 11:58:33 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/28 14:38:08 by dsantama         ###   ########.fr       */
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

void		num_or_star(const char *format, int i, t_data *data)
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

t_data		*ft_spaces(const char *format, int i, va_list args, t_data *data)
{
	ft_putspaces(format, i, args, data);
	if (data->digits > 1)
	{
		i += (data->digits - 1);
		data->zero = data->digits;
	}
	else
		data->zero = 1;
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

t_data		*ft_stars(const char *format, int i, va_list args, t_data *data)
{
	int		num;
	int		count;

	count = 0;
	data->digits = 1;
	num = va_arg(args, int);
	num_or_star(format, i, data);
	ft_width(format, i, args, data);
	while (count < (num - data->len))
	{
		ft_putchar(' ');
		count++;
	}
	if (!(!data->szero))
		ft_putstr(data->szero);
	if (data->mem != '0')
		ft_putstr(data->ptr);
	if (data->ch == '0' && data->negative == '0')
		ft_putstr(data->str);
	if (data->ch == '0' && data->negative == '1')
		ft_putstrn(data->str);
	if (data->ch != '0')
		ft_putchar(data->ch);
	data->total += 1;
	return (data);
}
