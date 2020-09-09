/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spaces.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 11:58:33 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/09 13:02:02 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_data		*ft_spaces(const char *format, int i, va_list args, t_data *data)
{
	ft_putspaces(format, i, data);
	if (data->digits > 1)
	{
		i += (data->digits - 1);
		data->zero = data->digits;
	}
	else
		data->zero = 1;
	ft_control(format, i, args, data);
	data->total += data->zero;
	return (data);
}
