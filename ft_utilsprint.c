/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilsprint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/31 11:21:09 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/03 13:49:29 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ef_number_digit(int n)
{
	if (n > -10 && n < 10)
		return (1);
	else
		return (1 + ef_number_digit(n / 10));
}

t_data		*ft_putzeros(const char *format, int i, t_data *data)
{
	char	*str;
	int		n;
	int		num;
	int		count;

	n = 0;
	count = 0;
	str = (char *)malloc(ft_strlen(format));
	while (format[i] != (format[i] >= '0' && format[i] <= '9'))
	{
		str[n] = format[i];
		n++;
		i++;
	}
	num = ft_atoi(str);
	free(str);
	data->digits = ef_number_digit(num);
	while (count < (num - 1))
	{
		ft_putchar('0');
		count++;
	}
	return (data);
}

t_data		*ft_putspaces(const char *format, int i, t_data *data)
{
	char	*str;
	int		n;
	int		num;
	int		count;

	n = 0;
	count = 0;
	str = (char *)malloc(ft_strlen(format));
	while (format[i] != (format[i] >= '0' && format[i] <= '9'))
	{
		str[n] = format[i];
		n++;
		i++;
	}
	num = ft_atoi(str);
	free(str);
	data->digits = ef_number_digit(num);
	while (count < (num - 1))
	{
		ft_putchar(' ');
		count++;
	}
	return (data);
}
