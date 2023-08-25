#include "main.h"
/**
 * binary - Function to convert decimal to binary
 * @dec: The decimal number to be converted
 * Return: This function takes a decimal number as input and converts it to its
*/

char *binary(int dec)
{
	int index;
	int x;
	int remainder;
	int binaryLength = 0;
	char* len;

	if (dec == 0)
	{
		char* len = (char*)malloc(2 * sizeof(char));
		strcpy(len, "0");
		return len;
	}

	x = dec;

	while (x > 0)
	{
		x /= 2;
		binaryLength++;
	}

	len = (char*)malloc((binaryLength + 1) * sizeof(char));
	len[binaryLength] = '\0';

	x = dec;
	index = binaryLength - 1;

	while (x > 0)
	{
		remainder = x % 2;
		len[index] = remainder + '0';
		x /= 2;
		index--;
	}

	return (len);
}
