#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdint.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char *octal(int decimal);
int my_puts(char *s);
int  _checker(const char format, va_list ap);
int _printf(const char *format, ...);
int  _putnbr(int n);
int  _putchar(char c);
int _putunsigned (unsigned int nb);
char _printHex(int n, int uppercase);
int    _printhex(unsigned long int nb);
int    _printhexHEX(unsigned int nb, int base);

#endif
