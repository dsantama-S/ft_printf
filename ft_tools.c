/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 09:06:09 by dsantama          #+#    #+#             */
/*   Updated: 2020/10/06 13:22:13 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		prec_zeros_width(int nums, t_data *data, int zeros)
{
	if (nums < 0)
	{
		data->nums = nums;
		zeros += 1;
	}
	data->len += zeros;
	data->hzero = zeros;
}

void			prec_zeros(int nums, t_data *data)
{
	int		zeros;
	int		count;

	count = 0;
	zeros = (data->prec - data->len);
	if (data->pr == '1')
		prec_zeros_width(nums, data, zeros);
	else
	{
		if (nums < 0)
		{
			zeros += 1;
			ft_putchar('-');
		}
		while (count < zeros)
		{
			ft_putchar('0');
			count++;
		}
	}
}

t_data			*base_zero(t_data *data)
{
	data->negative = '0';
	data->mem = '0';
	data->ch = '0';
	data->pr = '0';
	data->error = '0';
	data->true_zero = '0';
	data->from_zero = '0';
	data->negstar = '0';
	data->space = 0;
	data->count = 0;
	data->hzero = 0;
	data->nums = 0;
	data->len = 0;
	data->str = NULL;
	return (data);
}

void			ft_putstrn(const char *s)
{
	int i;

	i = 1;
	if (!(!s))
	{
		while (s[i] != '\0')
		{
			ft_putchar(s[i]);
			i++;
		}
	}
}

void			analyze_prec(int nums, t_data *data)
{
	if (nums < 0)
	{
		if (data->prec >= data->len)
		{
			prec_zeros(nums, data);
			data->true_zero = '1';
		}
	}
	else
	{
		if (data->prec > data->len)
		{
			prec_zeros(nums, data);
			data->true_zero = '1';
		}
	}
}
