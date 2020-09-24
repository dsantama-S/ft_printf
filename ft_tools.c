/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 09:06:09 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/24 12:02:35 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	prec_zeros(int length, t_data *data)
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

t_data	*base_zero(t_data *data)
{
	data->mem = '0';
	data->ch = '0';
	data->pr = '0';
	data->str = NULL;
	data->szero = NULL;
	return (data);
}
