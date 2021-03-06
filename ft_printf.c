/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 08:50:54 by dsantama          #+#    #+#             */
/*   Updated: 2020/10/08 09:08:56 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_data		*ft_parse(const char *format, t_data *data,
va_list args, int n)
{
	int			i;

	i = 0;
	data->printed = 0;
	while ((i < n) != '\0')
	{
		if (format[i] == '%')
		{
			base_zero(data);
			ft_control(format, i, args, data);
			i += data->total;
			ft_percent(format, i, args, data);
			i += data->percent;
		}
		if (format[i] != '\0')
		{
			ft_putchar(format[i]);
			data->printed++;
		}
		i++;
	}
	return (data);
}

int					ft_printf(const char *format, ...)
{
	t_data		*data;
	va_list		args;
	int			n_format;

	n_format = (ft_strlen(format));
	va_start(args, format);
	data = ((t_data *)malloc(sizeof(t_data)));
	if (!data)
		return (0);
	ft_parse(format, data, args, n_format);
	va_end(args);
	free(data);
	return (data->printed);
}
