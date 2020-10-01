/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 10:32:28 by dsantama          #+#    #+#             */
/*   Updated: 2020/10/01 13:40:40 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	no_width(char *str, int nums, t_data *data)
{
	if (nums < 0 && data->prec != 1)
		if (data->true_zero == '1')
			ft_putstrn(str);
		else
			ft_putstr(str);
	else
		ft_putstr(str);
	free(str);
}

void		ft_printint(va_list args)
{
	char	*str;
	int		nums;

	nums = va_arg(args, int);
	str = ft_itoa(nums);
	ft_putstr(str);
	free(str);
}

t_data		*ft_wprintint(va_list args, t_data *data)
{
	int		nums;
	char	*str;

	nums = va_arg(args, int);
	if (nums < 0 && data->from_zero == '1')
	{
		ft_putchar('-');
		data->negative = '1';
	}
	str = ft_itoa(nums);
	data->len = ft_strlen(str);
	data->str = str;
	free(str);
	return (data);
}

t_data		*ft_sprintint(va_list args, t_data *data)
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
		if (nums < 0 && data->prec != 1)
			if (data->true_zero == '1')
				data->negative = '1';
		data->str = str;
		if (data->digits_prec > 1)
			data->total += 1;
		if (data->digits_prec > 2)
			data->total += data->digits_prec - 2;
	}
	else
		no_width(str, nums, data);
	return (data);
}
