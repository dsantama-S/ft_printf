/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 10:32:28 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/24 13:52:53 by dsantama         ###   ########.fr       */
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

void		ft_sprintint(va_list args, t_data *data)
{
	char	*str;
	int		nums;
	int		length;

	nums = va_arg(args, int);
	str = ft_itoa(nums);
	length = ft_strlen(str);
	data->len = length;
	analyze_prec(nums, length, data);
	if (data->pr == '1')
	{
		data->str = str;
		data->total += 1;
	}
	else
	{
		if (nums < 0 && data->prec != 1)
			ft_putstrn(str);
		else
			ft_putstr(str);
	}
}
