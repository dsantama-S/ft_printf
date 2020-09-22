/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 09:05:16 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/22 09:15:02 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static uintmax_t	get_num(va_list args)
{
	uintmax_t		num;

	num = (unsigned long)(va_arg(args, unsigned long int));
	return (num);
}

void				ft_printptr(va_list args)
{
	char			*str;
	uintmax_t		nums;

	nums = get_num(args);
	str = ft_itoa_base(nums, 16, 'a');
	write(1, "0x", 2);
	ft_putstr(str);
}

t_data				*ft_wprintptr(va_list args, t_data *data)
{
	uintmax_t		nums;

	nums = get_num(args);
	data->str = ft_itoa_base(nums, 16, 'a');
	data->len = ft_strlen(data->str) + 2;
	data->mem = '1';
	data->ptr = "0x";
	return (data);
}
