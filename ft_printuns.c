/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuns.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 08:54:02 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/23 10:06:43 by dsantama         ###   ########.fr       */
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
	int				zeros;
	int				count;
	int				length;

	count = 0;
	nums = va_arg(args, unsigned int);
	str = ft_itoa_base(nums, 10, 'a');
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
