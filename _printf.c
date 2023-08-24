#include "main.h"

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints a string with newline
 * @s: the string to print
 *
 * Return: void
 */
int	_puts(char *s)
{
	int	len;

	len = 0;
	if (!s)
		s = "(null)";
	while (*s)
		len += write(1, s++, 1);
	return (len);
}

/**
 * _checker - checker
 * @format: The format character specifying the output format
 * @ap: The va_list containing the arguments
 *
 * Return: The total number of bytes printed
 */
 int    _checker(const char format, va_list ap)
{
         int     len;

         len = 0;
         if (format == '%')
         {
                 len += _putchar('%');
         }
         else if (format == 'c')
         {
                 len += _putchar(va_arg(ap, char));
         }
         else if (format == 's')
         {
                 len += _puts(va_arg(ap, char *));
         }
         else if (format == 'd' || format == 'i')
         {
                  len += _putnbr(va_arg(ap, int));
         }
         else if (format == 'o')
         {
                 len += _puts(octal(va_arg(ap, int)));
         }
         else if (format == 'u')
         {
                  len += _putunsigned(va_arg(ap, unsigned int));
         }
         else if (format == 'x')
         {
        len += _printhexHEX(va_arg(ap, int), 1);
         }
         else if (format == 'X')
         {
        len += _printhexHEX(va_arg(ap, int), 2);
         }
           else if (format == 'p')
           {
             len += _putchar('0');
             len += _putchar('x');
             len += _printhex(va_arg(ap, unsigned long int));
           }
         else
         {
                _putchar('%');
                 len += _putchar(format);
         }
  return (len);
}

/**
 * _printf - Function to print a variety of data types
 * @format: The format string specifying the output format
 *
 * Return: The total number of bytes printed
 */
int	_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	ap;

	i = -1;
	len = 0;
	va_start(ap, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			i++;
			while (format[i] == ' ' && format[i])
				i++;
			len += _checker(format[i], ap);
		}
		else
			len += _putchar(format[i]);
	}
	va_end(ap);
	return (len);
}

