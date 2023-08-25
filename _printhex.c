#include "main.h"

/**
* _printhex - writes the character c to stdout
* @nb: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int	_printhex(unsigned long int nb)
{
	int	len;

	len = 0;
	if (nb < 16)
	{
		if (nb < 10)
			len += _putchar(nb + 48);
		else
			len += _putchar(nb + 87);
	}
	if (nb >= 16)
	{
		len += _printhex(nb / 16);
		len += _printhex(nb % 16);
	}
	return (len);
}
