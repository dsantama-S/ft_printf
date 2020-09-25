/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuns.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 08:54:02 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/25 12:20:08 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	prec_zeros_uns(int length, t_data *data)
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

void		ft_printuns(va_list args)
{
	char				*str;
	unsigned			nums;

	nums = va_arg(args, unsigned int);
	str = ft_itoa_base(nums, 10, 'a');
	ft_putstr(str);
}

t_data		*ft_wprintuns(va_list args, t_data *data)
{
	unsigned nums;

	nums = va_arg(args, unsigned int);
	data->str = ft_itoa_base(nums, 10, 'a');
	data->len = ft_strlen(data->str);
	return (data);
}

void		ft_sprintuns(va_list args, t_data *data)
{
	char			*str;
	unsigned		nums;
	int				length;

	nums = va_arg(args, unsigned int);
	str = ft_itoa_base(nums, 10, 'a');
	length = ft_strlen(str);
	data->len = length;
	if (data->prec > length)
		prec_zeros_uns(length, data);
	if (data->pr == '1')
	{
		data->str = str;
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
}
