/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:42:20 by dsantama          #+#    #+#             */
/*   Updated: 2020/09/22 12:26:39 by dsantama         ###   ########.fr       */
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
	int				digits;
	int				percent;
	int				len;
	char			*str;
	char			ch;
	char			*ptr;
	char			mem;
}					t_data;

int					ft_printf(const char *format, ...);
void				ft_printchar(va_list args);
void				ft_printint(va_list args);
void				ft_printuns(va_list args);
t_data				*ft_percent(const char *format, int i, va_list args,
t_data *data);
void				ft_printstr(va_list args);
t_data				*ft_putspaces(const char *format, int i, va_list args,
t_data *data);
t_data				*ft_putzeros(const char *format, int i, va_list args,
t_data *data);
void				ft_printhex(const char *format, int i, va_list args);
void				ft_control(const char *format, int i, va_list args,
t_data *data);
void				ft_flags(const char *format, int i, va_list args,
t_data *data);
t_data				*ft_zero(const char *format, int i, va_list args,
t_data *data);
t_data				*ft_spaces(const char *format, int i, va_list args,
t_data *data);
t_data				*ft_stars(const char *format, int i, va_list args,
t_data *data);
t_data				*ft_starz(const char *format, int i, va_list args,
t_data *data);
void				ft_printptr(va_list args);
void				ft_width(const char *format, int i, va_list args,
t_data *data);
t_data				*ft_wprintstr(va_list args, t_data *data);
t_data				*ft_wprintstr(va_list args, t_data *data);
t_data				*ft_wprintint(va_list args, t_data *data);
t_data				*ft_wprintuns(va_list args, t_data *data);
t_data				*ft_wprintchar(va_list args, t_data *data);
t_data				*ft_wprintptr(va_list args, t_data *data);
t_data				*ft_wprintper(t_data *data);
t_data				*ft_wprinthex(const char *format, int i, va_list args,
t_data *data);
void				ft_check_zero(const char *format, int i, va_list args,
t_data *data);
#endif
