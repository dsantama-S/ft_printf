/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spaces.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 11:58:33 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/10 13:07:56 by dsantama         ###   ########.fr       */
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
	if (data->ch == '0')
		ft_putstr(data->str);
	if (data->ch != '0')
		ft_putchar(data->ch);
	data->total += data->zero;
	return (data);
}
