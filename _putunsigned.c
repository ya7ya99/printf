#include "main.h"

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int _putunsigned(unsigned int nb)
{
	int len;

	len = 0;

	if (nb < 10)
	{
		len += _putchar(nb + '0');
	}
	else
	{
		len += _putunsigned int (nb / 10);
		len += _putunsigned int (nb % 10);
	}
	return (len);
}
