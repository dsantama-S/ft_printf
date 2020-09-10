/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 10:32:28 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/10 12:28:57 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_printint(va_list args)
{
	char	*str;
	int		nums;

	nums = va_arg(args, int);
	str = ft_itoa(nums);
	ft_putstr(str);
}

t_data		*ft_wprintint(va_list args, t_data *data)
{
	int nums;

	nums = va_arg(args, int);
	data->str = ft_itoa(nums);
	data->len = ft_strlen(data->str);
	return (data);
}
