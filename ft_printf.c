/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 09:56:31 by cmaciel-          #+#    #+#             */
/*   Updated: 2025/01/07 09:56:31 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_handleformat(const char specifier, va_list args)
{
	int	printed;

	printed = 0;
	if (specifier == 'c')
		printed += ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		printed += ft_putstr(va_arg(args, char *));
	else if (specifier == 'i' || specifier == 'd')
		printed += ft_putnbr(va_arg(args, int));
	else if (specifier == 'u')
		printed += ft_putunsigned(va_arg(args, unsigned int));
	else if (specifier == 'x' || specifier == 'X')
		printed += ft_puthex(va_arg(args, unsigned int), specifier);
	else if (specifier == 'p')
		printed += ft_putptr(va_arg(args, void *));
	else if (specifier == '%')
		printed += ft_putchar('%');
	return (printed);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		full_print;

	va_start(args, str);
	full_print = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			i++;
			full_print += ft_handleformat(str[i], args);
		}
		else
			full_print += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (full_print);
}
