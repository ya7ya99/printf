#include "main.h"

int	_putnbr(int n)
{
	int	len;
	int nb;

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

