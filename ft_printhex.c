/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 10:59:27 by dsantama          #+#    #+#             */
/*   Updated: 2020/10/06 13:38:24 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	prec_zeros_hex(t_data *data)
{
	int		zeros;
	int		count;

	count = 0;
	zeros = (data->prec - data->len);
	if (data->pr == '1')
	{
		data->hzero = zeros;
		data->len += zeros;
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
	free(str);
}

t_data		*ft_wprinthex(const char *format, int i, va_list args, t_data *data)
{
	unsigned		nums;
	char			*str;

	nums = va_arg(args, unsigned int);
	if (format[i] == 'x')
		str = ft_itoa_base(nums, 16, 'a');
	if (format[i] == 'X')
		str = ft_itoa_base(nums, 16, 'A');
	data->len = ft_strlen(str);
	data->str = str;
	free(str);
	return (data);
}

t_data		*ft_sprinthex(const char *format, int i, va_list args, t_data *data)
{
	unsigned		nums;
	char			*str;

	nums = va_arg(args, unsigned int);
	if (format[i] == 'x')
		str = ft_itoa_base(nums, 16, 'a');
	if (format[i] == 'X')
		str = ft_itoa_base(nums, 16, 'A');
	data->len = ft_strlen(str);
	data->str = str;
	if (data->prec > data->len)
		prec_zeros_hex(data);
	if (data->pr == '1')
	{
		if (data->digits_prec > 1)
			data->total += 1;
		if (data->digits_prec > 2)
			data->total += data->digits_prec - 2;
	}
	else
		ft_putstr(data->str);
	free(str);
	return (data);
}

t_data		*putpreczero(t_data *data)
{
	int	count;

	count = 0;
	if (data->nums < 0)
		ft_putchar('-');
	while (count < data->hzero)
	{
		ft_putchar('0');
		count++;
	}
	return (data);
}
