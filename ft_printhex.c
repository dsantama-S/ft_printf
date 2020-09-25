/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 10:59:27 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/25 12:14:54 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	prec_zeros_hex(int length, t_data *data)
{
	int		zeros;
	int		count;
	char	*str;

	count = 0;
	zeros = (data->prec - length);
	str = malloc(zeros);
	if (data->pr == '1')
	{
		while (count < zeros)
		{
			str[count] = '0';
			count++;
		}
		data->len = length + count;
		data->szero = str;
		free(str);
	}
	else
		while (count < zeros)
		{
			ft_putchar('0');
			count++;
		}
}

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
	int				length;

	nums = va_arg(args, unsigned int);
	if (format[i] == 'x')
		str = ft_itoa_base(nums, 16, 'a');
	if (format[i] == 'X')
		str = ft_itoa_base(nums, 16, 'A');
	length = ft_strlen(str);
	data->len = length;
	if (data->prec > length)
		prec_zeros_hex(length, data);
	if (data->pr == '1')
	{
		data->str = str;
		if (data->digits_prec > 1)
			data->total += 1;
		if (data->digits_prec > 2)
			data->total += data->digits_prec - 2;
	}
	else
		ft_putstr(str);
}
