/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 09:34:34 by dsantama          #+#    #+#             */
/*   Updated: 2020/08/31 11:20:32 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_data		*ft_zero(const char *format, int i, va_list args, t_data *data)
{
	i++;
	if (format[i] >= '0' && format[i] <= '9')
		ft_putzeros(format, i);
	ft_control(format, i, args, data);
	data->zero = 2;
	data->total += data->zero;
	return (data);
}
