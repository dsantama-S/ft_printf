/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuns.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 08:54:02 by dsantama          #+#    #+#             */
/*   Updated: 2020/10/06 13:39:27 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	prec_zeros_uns(t_data *data)
{
	int		zeros;
	int		count;

	count = 0;
	zeros = (data->prec - data->len);
	if (data->pr == '1')
	{
		data->len += zeros;
		data->hzero = zeros;
	}
	else
		while (count < zeros)
		{
			ft_putchar('0');
			count++;
		}
}

void		ft_printuns(va_list args)
{
	char				*str;
	unsigned			nums;

	nums = va_arg(args, unsigned int);
	str = ft_itoa_base(nums, 10, 'a');
	ft_putstr(str);
	free(str);
}

t_data		*ft_wprintuns(va_list args, t_data *data)
{
	unsigned	nums;
	char		*str;

	nums = va_arg(args, unsigned int);
	str = ft_itoa_base(nums, 10, 'a');
	data->len = ft_strlen(str);
	data->str = str;
	free(str);
	return (data);
}

void		ft_sprintuns(va_list args, t_data *data)
{
	char			*str;
	unsigned		nums;

	nums = va_arg(args, unsigned int);
	str = ft_itoa_base(nums, 10, 'a');
	data->len = ft_strlen(str);
	data->str = str;
	if (data->prec > data->len)
		prec_zeros_uns(data);
	if (data->pr == '1')
	{
		if (data->digits_prec > 1)
			data->total += 1;
		if (data->digits_prec > 2)
			data->total += data->digits_prec - 2;
	}
	else
	{
		if (nums < 0)
			ft_putstrn(str);
		else
			ft_putstr(str);
	}
	free(str);
}
