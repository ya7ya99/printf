#include "main.h"

int	_putchar(char c)
{	
	return (write(1, &c, 1));
}

int	_putnbr(int n)
{
	int			len;
	long long	nb;

	len = 0;
	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		len += _putchar('-');
	}
	if (nb < 10)
	{
		len += _putchar(nb + '0');
	}
	else
	{
		len += _putnbr(nb / 10);
		len += _putnbr(nb % 10);
	}
	return (len);
}
