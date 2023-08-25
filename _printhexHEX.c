#include "main.h"

/**
* _printhexHEX - writes the character c to stdout
* @nb: The character to print
* @base: likan ra 3yit
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int	_printhexHEX(unsigned int nb, int base)
{

	int	len;

	len = 0;
	if (nb < 16)
	{
		if (nb < 10)
			len += _putchar(nb + 48);
		else
		{
			if (base == 1)
				len += _putchar(nb + 87);
			else
				len += _putchar(nb + 55);
		}
	}
	else if (nb >= 16)
	{
		len += _printhexHEX(nb / 16, base);
		len += _printhexHEX(nb % 16, base);
	}
	return (len);
}
