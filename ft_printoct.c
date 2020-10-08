/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printoct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 12:03:15 by dsantama          #+#    #+#             */
/*   Updated: 2020/10/08 11:08:37 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	prec_zeros_oct(t_data *data)
{
	int		zeros;
	int		count;

	count = 0;
	zeros = (data->prec - data->len);
	data->printed += zeros;
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

t_data		*ft_printoct(va_list args, t_data *data)
{
	char			*str;
	unsigned		nums;

	nums = va_arg(args, unsigned int);
	str = ft_itoa_base(nums, 8, 'a');
	data->len = ft_strlen(str);
	data->printed += data->len;
	ft_putstr(str);
	free(str);
	return (data);
}

t_data		*ft_wprintoct(va_list args, t_data *data)
{
	unsigned		nums;
	char			*str;

	nums = va_arg(args, unsigned int);
	str = ft_itoa_base(nums, 8, 'a');
	data->len = ft_strlen(str);
	data->printed += data->len;
	data->str = str;
	free(str);
	return (data);
}

t_data		*ft_sprintoct(va_list args, t_data *data)
{
	char			*str;
	unsigned		nums;

	nums = va_arg(args, unsigned int);
	str = ft_itoa_base(nums, 8, 'a');
	data->len = ft_strlen(str);
	data->printed += data->len;
	data->str = str;
	if (data->prec > data->len)
		prec_zeros_oct(data);
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
