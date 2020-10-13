/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:42:20 by dsantama          #+#    #+#             */
/*   Updated: 2020/10/13 10:40:31 by dsantama         ###   ########.fr       */
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
	int				count;
	int				digits;
	int				digits_prec;
	int				percent;
	int				len;
	int				prec;
	int				space;
	int				printed;
	int				nums;
	char			*str;
	char			*ptr;
	int				hzero;
	char			true_zero;
	char			from_zero;
	char			negstar;
	char			ch;
	char			from_star;
	char			mychar;
	char			pr;
	char			error;
	char			negative;
}					t_data;

int					ft_printf(const char *format, ...);
t_data				*ft_printchar(va_list args, t_data *data);
t_data				*ft_printint(va_list args, t_data *data);
t_data				*ft_printuns(va_list args, t_data *data);
t_data				*ft_printoct(va_list args, t_data *data);
t_data				*little_space(const char *format, int i, t_data *data);
t_data				*ft_percent(const char *format, int i, va_list args,
t_data *data);
t_data				*ft_printstr(va_list args, t_data *data);
t_data				*ft_putspaces(const char *format, int i, va_list args,
t_data *data);
t_data				*ft_putzeros(const char *format, int i, va_list args,
t_data *data);
t_data				*ft_printhex(const char *format, int i, va_list args,
t_data *data);
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
t_data				*ft_starpr(const char *format, int i, va_list args,
t_data *data);
t_data				*ft_printptr(va_list args, t_data *data);
void				ft_width(const char *format, int i, va_list args,
t_data *data);
t_data				*ft_precision(const char *format, int i, va_list args,
t_data *data);
t_data				*ft_wprintstr(va_list args, t_data *data);
t_data				*ft_wprintstr(va_list args, t_data *data);
t_data				*ft_wprintint(va_list args, t_data *data);
t_data				*ft_wprintuns(va_list args, t_data *data);
t_data				*ft_wprintchar(va_list args, t_data *data);
t_data				*ft_wprintptr(va_list args, t_data *data);
t_data				*ft_wprintper(t_data *data);
t_data				*ft_wprintoct(va_list args, t_data *data);
t_data				*ft_wprinthex(const char *format, int i, va_list args,
t_data *data);
t_data				*ft_sprintstr(va_list args, t_data *data);
t_data				*ft_sprintint(va_list args, t_data *data);
t_data				*ft_sprintptr(va_list args, t_data *data);
t_data				*ft_sprintuns(va_list args, t_data *data);
t_data				*ft_sprintoct(va_list args, t_data *data);
t_data				*ft_sprinthex(const char *format, int i, va_list args,
t_data *data);
t_data				*ft_dash(const char *format, int i, va_list args,
t_data *data);
t_data				*ft_stardash(const char *format, int i, va_list args,
t_data *data);
t_data				*after_flag(const char *format, int i, va_list args,
t_data *data);
t_data				*after_flag_zero(const char *format, int i, va_list args,
t_data *data);
void				num_or_star(const char *format, int i, t_data *data);
int					copy_num(const char *format, int i);
t_data				*error(const char *format, int i, t_data *data);
t_data				*error_prec_zeros(const char *format, int i, t_data *data);
void				prec_zeros(int nums, t_data *data);
t_data				*base_zero(t_data *data);
void				ft_putstrn(const char *s);
void				analyze_prec(int nums, t_data *data);
void				ft_spec(const char *format, int i, va_list args,
t_data *data);
int					ef_number_digit(int n);
t_data				*putpreczero(t_data *data);
#endif
