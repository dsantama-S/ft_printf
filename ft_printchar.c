/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 08:58:20 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/30 13:48:03 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_printchar(va_list args)
{
	char c;

	c = (char)va_arg(args, int);
	ft_putchar(c);
}

t_data		*ft_wprintchar(va_list args, t_data *data)
{
	char c;

	c = (char)va_arg(args, int);
	data->ch = '1';
	data->mychar = c;
	data->len = 1;
	return (data);
}

t_data		*ft_wprintper(t_data *data)
{
	char c;

	c = '%';
	data->ch = '1';
	data->mychar = c;
	data->len = 1;
	return (data);
}
