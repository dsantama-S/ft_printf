/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spaces.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 11:58:33 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/25 13:41:45 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	num = va_arg(args, int);
	ft_width(format, i, args, data);
	while (count < (num - data->len))
	{
		ft_putchar(' ');
		count++;
	}
	if (data->mem != '0')
		ft_putstr(data->ptr);
	if (data->ch == '0')
		ft_putstr(data->str);
	if (data->ch != '0')
		ft_putchar(data->ch);
	data->total += 1;
	return (data);
}
