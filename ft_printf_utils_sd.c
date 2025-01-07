/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_sd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 09:56:07 by cmaciel-          #+#    #+#             */
/*   Updated: 2025/01/07 09:56:07 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
