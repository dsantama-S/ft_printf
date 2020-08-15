
#include "ft_printf.h"

void ft_control(const char *format, char *str, int i)
{
    i++;
    if (str[i] == 'c')
        ft_printchar(format);
}