#include "main.h"

/**
* octal - Function to convert decimal to octal
* @decimal: The decimal number to be converted
* Return: A string representing the octal number
* This function takes a decimal number as input and converts it to its
* octal representation. It returns a string containing the octal number.
*/

char *octal(int decimal)
{
	static char len[100];

	int octalNum[100];
	int i = 0;

	while (decimal > 0)
	{
		octalNum[i] = decimal % 8;
		decimal /= 8;
		i++;
	}

	int str = 0;

	for (int j = i - 1; j >= 0; j--)
	{
		len[str++] = octalNum[j] + '0';
	}
	len[str] = '\0';

	return (len);
}
