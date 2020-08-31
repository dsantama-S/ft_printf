/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilsprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 11:21:09 by dsantama          #+#    #+#             */
/*   Updated: 2020/08/31 12:51:36 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_putzeros(const char *format, int i)
{
	char	*str;
	int		n;

	n = 0;
	str = NULL;
	while (format[i] >= '0' && format[i] <= '9')
	{
		str[n] = format[i];
		n++;
		i++;
	}
	ft_putstr(str);
}
