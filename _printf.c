#include "main.h"

/**
 * _puts - prints a string with newline
 * @str: the string to print
 *
 * Return: number of characters printed
 */
int _puts(char *str)
{
    int count = 0;

    while (*str)
    {
        _putchar(*str);
        str++;
        count++;
    }

    _putchar('\n'); // Print a newline character
    count++;

    return count;
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(int c)
{
    static char buf[OUTPUT_BUF_SIZE];
    static int i = 0;
    
    if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
    {
        write(1, buf, i);
        i = 0;
    }
    
    if (c != BUF_FLUSH)
    {
        buf[i] = c;
        i++;
    }
    
    return 1;
}
