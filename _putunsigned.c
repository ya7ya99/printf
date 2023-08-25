#include "main.h"

/**
* _putunsigned - writes the character c to stdout
* @nb: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int _putunsigned (unsigned int nb)
{
	int len;

	len = 0;

	if (nb < 10)
	{
		len += _putchar(nb + '0');
	}
	else
	{
		len += _putunsigned(nb / 10);
		len += _putunsigned(nb % 10);
	}
	return (len);
}
