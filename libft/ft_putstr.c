/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 11:36:38 by dsantama          #+#    #+#             */
/*   Updated: 2020/08/05 12:59:21 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(const char *s)
{
	int i;

	i = 0;
	if (!(!s))
	{
		while (s[i] != '\0')
		{
			ft_putchar(s[i]);
			i++;
		}
	}
}