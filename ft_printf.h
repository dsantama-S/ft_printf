/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantama <dsantama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:42:20 by dsantama          #+#    #+#             */
/*   Updated: 2020/08/17 12:49:39 by dsantama         ###   ########.fr       */
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
	char			*str;
	int				star_w;
	int				star_p;
	int				minus;
	int				zero;
	int				dot;
	int				type;

}					t_data;

int					ft_printf(const char *format, ...);
void				ft_printchar(t_data *data, va_list args);
void 				ft_control(const char *format, int i, t_data *data, va_list args);
#endif
