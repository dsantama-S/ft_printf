/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 08:58:20 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/22 12:28:19 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_printchar(va_list args)
{
	unsigned char c;

	c = (unsigned char)va_arg(args, int);
	ft_putchar(c);
}

t_data		*ft_wprintchar(va_list args, t_data *data)
{
	unsigned char c;

	c = (unsigned char)va_arg(args, int);
	data->ch = c;
	data->len = 1;
	return (data);
}

t_data		*ft_wprintper(t_data *data)
{
	unsigned char c;

	c = '%';
	data->ch = c;
	data->len = 1;
	return (data);
}
