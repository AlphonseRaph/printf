#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unstd.h>

int _printf(const char *format, ...);
unsigned int v_printf(const char *format, va_list args);
int _puts(const char *str);
int _putchar(char c);
unsigned int _strlen(const char *str);

#endif
