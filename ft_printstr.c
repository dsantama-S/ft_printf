/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 09:05:59 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/24 12:33:11 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void		ft_printstr(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	ft_putstr(str);
}

t_data		*ft_wprintstr(va_list args, t_data *data)
{
	data->str = va_arg(args, char *);
	data->len = ft_strlen(data->str);
	return (data);
}

void		ft_sprintstr(va_list args, t_data *data)
{
	char	*str;
	char	*dest;
	int		n;
	int		size_dest;

	n = 0;
	size_dest = data->prec;
	str = va_arg(args, char *);
	dest = (char *)malloc(ft_strlen(str));
	while ((n < size_dest) != '\0')
	{
		dest[n] = str[n];
		n++;
	}
	data->len = 2;
	if (data->pr == '1')
	{
		data->str = dest;
		data->total += 1;
	}
	else
		ft_putstr(dest);
	free(dest);
}
