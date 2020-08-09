/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 08:50:54 by dsantama          #+#    #+#             */
/*   Updated: 2020/08/09 18:48:38 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	t_data		*data;
	int			n_format;
	int			count;

	count = 0;
	data = ((t_data *)malloc(sizeof(t_data)));
	if (!data)
		return (0);
	n_format = (ft_strlen(format));
	va_start(data->args, format);
	while (count < n_format)
	{
		if (format(count)=
		count++;
	}
	ft_putstr(format);
	va_end(data->args);
	return (n_format);
}
