/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 09:34:34 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/03 12:47:18 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_data		*ft_zero(const char *format, int i, va_list args, t_data *data)
{
	i++;
	if (format[i] >= '1' && format[i] <= '9')
		ft_putzeros(format, i, data);
	if (data->digits > 1)
	{
		i += (data->digits - 1);
		data->zero = (data->digits + 1);
	}
	else
		data->zero = 2;
	ft_control(format, i, args, data);
	data->total += data->zero;
	return (data);
}
