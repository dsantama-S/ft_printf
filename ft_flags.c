/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 09:31:28 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/28 14:35:17 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_flags(const char *format, int i, va_list args, t_data *data)
{
	if (format[i] == '0')
		ft_zero(format, i, args, data);
	if (format[i] >= '1' && format[i] <= '9')
		ft_spaces(format, i, args, data);
	if (format[i] == '*')
		ft_stars(format, i, args, data);
	if (format[i] == '.')
		ft_precision(format, i, args, data);
	if (format[i] == '-')
		ft_dash(format, i, args, data);
}

t_data		*error(const char *format, int i, t_data *data)
{
	if (format[i] == 's')
	{
		data->total += 1;
		data->error = '1';
	}
	if (format[i] == 'u' || format[i] == 'U')
	{
		data->total += 1;
		data->error = '1';
	}
	if (format[i] == 'x' || format[i] == 'X')
	{
		data->total += 1;
		data->error = '1';
	}
	if (format[i] == 'd' || format[i] == 'D' || format[i] == 'i')
	{
		data->total += 1;
		data->error = '1';
	}
	return (data);
}
