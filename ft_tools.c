/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 09:06:09 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/24 13:52:22 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	prec_zeros(int nums, int length, t_data *data)
{
	int		zeros;
	int		count;
	char	*str;

	count = 0;
	zeros = (data->prec - length);
	str = malloc(zeros);
	if (data->pr == '1')
	{
		if (nums < 0)
		{
			str[0] = '-';
			count++;
			zeros += 2;
		}
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
	{
		if (nums < 0)
		{
			zeros += 1;
			ft_putchar('-');
		}
		while (count < zeros)
		{
			ft_putchar('0');
			count++;
		}
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

void	ft_putstrn(const char *s)
{
	int i;

	i = 1;
	if (!(!s))
	{
		while (s[i] != '\0')
		{
			ft_putchar(s[i]);
			i++;
		}
	}
}

void	analyze_prec(int nums, int length, t_data *data)
{
	if (nums < 0)
	{
		if (data->prec >= length)
			prec_zeros(nums, length, data);
	}
	else
	{
		if (data->prec > length)
			prec_zeros(nums, length, data);
	}
}
