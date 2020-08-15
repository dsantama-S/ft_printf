/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 08:50:54 by dsantama          #+#    #+#             */
/*   Updated: 2020/08/12 12:55:04 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	t_data		*data;
	int			n_format;
	int			i;
	char		*str;

	i = 0;
	data = ((t_data *)malloc(sizeof(t_data)));
	if (!data)
		return (0);
	n_format = (ft_strlen(format));
	str = (char *)format;
	while (i < n_format)
	{
		write(1, str, 1);
		if (str[i] == '%')
			break ;
		str++;
		i++;
	}
	va_start(data->args, format);
	va_end(data->args);
	return (n_format);
}
