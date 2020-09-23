/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 10:59:27 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/23 10:05:19 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_printhex(const char *format, int i, va_list args)
{
	char			*str;
	unsigned		nums;

	nums = va_arg(args, unsigned int);
	if (format[i] == 'x')
		str = ft_itoa_base(nums, 16, 'a');
	if (format[i] == 'X')
		str = ft_itoa_base(nums, 16, 'A');
	ft_putstr(str);
}

t_data		*ft_wprinthex(const char *format, int i, va_list args, t_data *data)
{
	unsigned		nums;

	nums = va_arg(args, unsigned int);
	if (format[i] == 'x')
		data->str = ft_itoa_base(nums, 16, 'a');
	if (format[i] == 'X')
		data->str = ft_itoa_base(nums, 16, 'A');
	data->len = ft_strlen(data->str);
	return (data);
}

void		ft_sprinthex(const char *format, int i, va_list args, t_data *data)
{
	char			*str;
	unsigned		nums;
	int				zeros;
	int				count;
	int				length;

	count = 0;
	nums = va_arg(args, unsigned int);
	if (format[i] == 'x')
		str = ft_itoa_base(nums, 16, 'a');
	if (format[i] == 'X')
		str = ft_itoa_base(nums, 16, 'A');
	length = ft_strlen(str);
	if (data->prec > length)
	{
		zeros = (data->prec - length);
		while (count < zeros)
		{
			ft_putchar('0');
			count++;
		}
	}
	ft_putstr(str);
}
