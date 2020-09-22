/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuns.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/22 08:54:02 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/22 10:02:04 by dsantama         ###   ########.fr       */
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
