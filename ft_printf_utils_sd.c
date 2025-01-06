#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	int	printed;

	printed = 0;
	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	printed += ft_putstr("0x");
	printed += ft_puthex((unsigned long long)ptr, 'x');
	return (printed);
}
