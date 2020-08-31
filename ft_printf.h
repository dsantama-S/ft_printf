/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:42:20 by dsantama          #+#    #+#             */
/*   Updated: 2020/08/31 11:24:19 by dsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct		s_data
{
	int				total;
	int				zero;
}					t_data;

int					ft_printf(const char *format, ...);
void				ft_printchar(va_list args);
void				ft_printint(va_list args);
void				ft_printstr(va_list args);
void				ft_putzeros(const char *format, int i);
void				ft_printhex(const char *format, int i, va_list args);
void				ft_control(const char *format, int i, va_list args,
t_data *data);
void				ft_flags(const char *format, int i, va_list args,
t_data *data);
t_data				*ft_zero(const char *format, int i, va_list args,
t_data *data);
void				ft_printptr(va_list args);
#endif
