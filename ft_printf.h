#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putunsigned(unsigned long nbr);
int	ft_puthex(unsigned long long nbr, char define);
int	ft_printf(const char *str, ...);

#endif