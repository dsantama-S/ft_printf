#include "ft_printf.h"

void ft_printstr(va_list args)
{
    char *str;

	str = (char *)va_arg(args, int);
	ft_putstr(str);
}
