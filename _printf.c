#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - produces output
 *
 * @format: format used
 *
 * Return: leng(success)
 *
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int leng = 0;

	va_start(args, format);
	leng = v_printf(format, args);

	va_end(args);
	return (leng);
}
