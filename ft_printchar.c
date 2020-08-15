/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 08:58:20 by dsantama          #+#    #+#             */
/*   Updated: 2020/08/05 11:17:52 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printchar(const char *format, ...)
{
	t_data *data;
	char c;

	va_start(data->args, format);
	c = va_arg(data->args, int);
	ft_putchar(c);
	va_end(data->args);
}
