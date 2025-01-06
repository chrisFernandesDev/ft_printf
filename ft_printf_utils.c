#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1); //Retorno 1 porque retorna o numero de bytes
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
	//verificar se posso retornar ft_putstr ou ft_putchar 
		//ft_putchar("(null)");
		return (ft_putstr("(null)"), 6);
		//return (6); //retorno 6?
	}
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	long	nbr;
	int		i;

	nbr = n;
	i = 0;
	if (nbr < 0)
	{
		i += ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= 10)
		i += ft_putnbr(nbr / 10);
	i += ft_putchar(nbr % 10 + '0');
	return (i);
}

int	ft_putunsigned(unsigned long nbr)
{
	int	i;

	i = 0;
	if (nbr >= 10)
		i += ft_putunsigned(nbr / 10);
	i += ft_putchar(nbr % 10 + '0');
	return (i);
}

int	ft_puthex(unsigned long long nbr, char define)
{
	char	*base;
	int		i;

	i = 0;
	if (define == 'x')
		base = "0123456789abcdef";
	else if (define == 'X')
		base = "0123456789ABCDEF";
	if (nbr == 0)
		return (ft_putchar('0'));
	if (nbr >= 16)
		i += ft_puthex(nbr / 16, define);
	i += ft_putchar(base[nbr % 16]);
	return (i);
}