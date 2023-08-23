#include "main.h"

/**
  * _putnbr - Function to print an integer
  *@n: The integer to be printed
  *Return: the number
*/
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

