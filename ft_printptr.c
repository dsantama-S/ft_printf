/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 09:05:16 by dsantama          #+#    #+#             */
/*   Updated: 2020/10/08 12:44:10 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void			prec_zeros_ptr(t_data *data)
{
	int		zeros;
	int		count;

	count = 0;
	zeros = (data->prec - data->len);
	data->printed += zeros + 2;
	if (data->pr == '1')
	{
		data->hzero = zeros + 2;
		data->len += zeros + 2;
	}
	else
	{
		ft_putstr(data->ptr);
		while (count < (zeros + 2))
		{
			ft_putchar('0');
			count++;
		}
	}
}

static uintmax_t	get_num(va_list args)
{
	uintmax_t		num;

	num = (unsigned long)(va_arg(args, unsigned long int));
	return (num);
}

t_data				*ft_printptr(va_list args, t_data *data)
{
	char			*str;
	uintmax_t		nums;

	nums = get_num(args);
	str = ft_itoa_base(nums, 16, 'a');
	data->len = ft_strlen(str) + 2;
	data->printed += data->len;
	write(1, "0x", 2);
	ft_putstr(str);
	free(str);
	return (data);
}

t_data				*ft_wprintptr(va_list args, t_data *data)
{
	uintmax_t		nums;
	char			*str;

	nums = get_num(args);
	str = ft_itoa_base(nums, 16, 'a');
	data->len = ft_strlen(str) + 2;
	data->printed += data->len;
	data->str = str;
	free(str);
	data->ptr = "0x";
	return (data);
}

t_data				*ft_sprintptr(va_list args, t_data *data)
{
	uintmax_t		nums;
	char			*str;

	nums = va_arg(args, unsigned int);
	str = ft_itoa_base(nums, 16, 'a');
	data->len = ft_strlen(str) + 2;
	data->printed += data->len;
	data->ptr = "0x";
	data->str = str;
	if (data->prec > data->len)
		prec_zeros_ptr(data);
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
