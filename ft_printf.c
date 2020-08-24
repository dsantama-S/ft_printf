/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 08:50:54 by dsantama          #+#    #+#             */
/*   Updated: 2020/08/17 12:48:09 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	t_data		*data;
	va_list		args;
	int			n_format;
	int			i;

	va_start(args, format);
	i = 0;
	data = ((t_data *)malloc(sizeof(t_data)));
	if (!data)
		return (0);
	n_format = (ft_strlen(format));
	while (i < n_format)
	{
		if (format[i] == '%')
		{
			ft_control(format, i, args);
			va_arg(args, int);
			i += 2;
		}
		ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (n_format);
}
