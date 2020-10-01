/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printoct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 12:03:15 by dsantama          #+#    #+#             */
/*   Updated: 2020/10/01 13:35:50 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	prec_zeros_oct(int length, t_data *data)
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

void		ft_printoct(va_list args)
{
	char			*str;
	unsigned		nums;

	nums = va_arg(args, unsigned int);
	str = ft_itoa_base(nums, 8, 'a');
	ft_putstr(str);
	free(str);
}

t_data		*ft_wprintoct(va_list args, t_data *data)
{
	unsigned		nums;
	char			*str;

	nums = va_arg(args, unsigned int);
	str = ft_itoa_base(nums, 8, 'a');
	data->len = ft_strlen(str);
	data->str = str;
	free(str);
	return (data);
}

t_data		*ft_sprintoct(va_list args, t_data *data)
{
	char			*str;
	unsigned		nums;
	int				length;

	nums = va_arg(args, unsigned int);
	str = ft_itoa_base(nums, 8, 'a');
	length = ft_strlen(str);
	data->len = length;
	if (data->prec > length)
		prec_zeros_oct(length, data);
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
	free(str);
	return (data);
}
