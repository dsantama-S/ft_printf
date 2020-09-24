/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuns.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 08:54:02 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/24 13:30:39 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
		prec_zeros(nums, length, data);
	if (data->pr == '1')
	{
		data->str = str;
		data->total += 1;
	}
	else
	{
		if (nums < 0)
		{
			ft_putstrn(str);
		}
		else
			ft_putstr(str);
	}
}
