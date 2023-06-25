#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	v_printf(format, args);

	va_end(args);
	return (0);
}
