/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 08:58:20 by dsantama          #+#    #+#             */
/*   Updated: 2020/10/08 12:40:56 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_data		*ft_printchar(va_list args, t_data *data)
{
	char c;

	c = (char)va_arg(args, int);
	ft_putchar(c);
	data->printed += 1;
	return (data);
}

t_data		*ft_wprintchar(va_list args, t_data *data)
{
	char c;

	c = (char)va_arg(args, int);
	data->ch = '1';
	data->mychar = c;
	data->len = 1;
	data->printed += 1;
	return (data);
}

t_data		*ft_wprintper(t_data *data)
{
	char c;

	c = '%';
	data->ch = '1';
	data->mychar = c;
	data->len = 1;
	data->printed += 1;
	return (data);
}
