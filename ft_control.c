/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 11:06:49 by dsantama          #+#    #+#             */
/*   Updated: 2020/08/17 12:48:45 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_control(const char *format, int i, t_data *data, va_list args)
{
	i++;
	if (format[i] == 'c')
		ft_printchar(data, args);
}
