/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 09:05:59 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/25 13:32:18 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_printstr(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (!str)
		str = ft_strdup("(null)");
	ft_putstr(str);
}

t_data		*ft_wprintstr(va_list args, t_data *data)
{
	data->str = va_arg(args, char *);
	if (!data->str)
		data->str = ft_strdup("(null)");
	data->len = ft_strlen(data->str);
	return (data);
}

void		ft_sprintstr(va_list args, t_data *data)
{
	char	*str;
	char	*dest;

	str = va_arg(args, char *);
	dest = (char *)malloc(ft_strlen(str));
	ft_strncpy(dest, str, data->prec);
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
