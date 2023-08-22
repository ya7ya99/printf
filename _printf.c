#include "main.h"

/**
<<<<<<< Updated upstream
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

_putchar('\n');
count++;

return (count);
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
static int i;

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

return (1);
=======
 * _printf - Function to print a variety of data types
 * @format: The format string specifying the output format
 * Return: The total number of bytes printed
 */
int _printf(const char *format, ...)
{
    int sum = 0;
    va_list ap;
    char *p, *start;
    params_t params = PARAMS_INIT;

    va_start(ap, format);

    if (!format || (format[0] == '%' && !format[1]))
        return (-1);
    if (format[0] == '%' && format[1] == ' ' && !format[2])
        return (-1);

    for (p = (char *)format; *p; p++) {
        init_params(&params, ap);
        if (*p != '%') {
            sum += _putchar(*p);
            continue;
        }

        start = p;
        p++;
        while (get_flag(p, &params)) {
            p++;
        }

        p = get_width(p, &params, ap);
        p = get_precision(p, &params, ap);
        
        if (get_modifier(p, &params))
            p++;

        if (!get_specifier(p)) {
            sum += print_from_to(start, p,
                                 params.l_modifier || params.h_modifier ? p - 1 : 0);
        } else {
            sum += get_print_func(p, ap, &params);
        }
    }

    _putchar(BUF_FLUSH);
    va_end(ap);
    return (sum);
>>>>>>> Stashed changes
}

