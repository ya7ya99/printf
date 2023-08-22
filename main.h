#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int     _puts(char *s);
int     _checker(const char format, va_list ap);
int     _printf(const char *format, ...);

#endif
