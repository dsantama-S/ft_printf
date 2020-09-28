/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 09:05:59 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/28 12:03:41 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_printstr(va_list args)
{
	char *str;
	char *var;

	var = va_arg(args, char *);
	if (!var)
		str = ft_strdup("(null)");
	else
		str = ft_strdup(var);
	ft_putstr(str);
}

t_data		*ft_wprintstr(va_list args, t_data *data)
{
	char *var;

	var = va_arg(args, char *);
	if (!var)
		data->str = ft_strdup("(null)");
	else
		data->str = ft_strdup(var);
	data->len = ft_strlen(data->str);
	return (data);
}

void		ft_sprintstr(va_list args, t_data *data)
{
	char	*var;
	char	*str;
	char	*dest;

	var = va_arg(args, char *);
	if (!var)
		str = ft_strdup("(null)");
	else
		str = ft_strdup(var);
	dest = (char *)malloc(ft_strlen(str));
	ft_strncpy(dest, str, data->prec);
	data->len = ft_strlen(dest);
	if (data->pr == '1')
	{
		data->str = dest;
		if (data->digits_prec > 1)
			data->total += 1;
		if (data->digits_prec > 2)
			data->total += data->digits_prec - 2;
	}
	else
		ft_putstr(dest);
	free(dest);
}
