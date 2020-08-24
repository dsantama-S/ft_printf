#include "ft_printf.h"

void ft_printptr(va_list args)
{
    int *ptr;

	ptr = (va_arg(args, int *));
	ft_putchar(ptr);
}
