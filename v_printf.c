#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * v_printf - printf function
 * @format: The format string
 * @args: Variable arguments list
 *
 * Return: The length of the output
 */
unsigned int v_printf(const char *format, va_list args)
{
	int st = 0;
	char ch;
	const char *str;
	unsigned int leng = 0;

	while (*format)
	{
		if (st == 0)
		{
			if (*format == '%')
				st = 1;
			else
				leng += _putchar(*format);
		}
		else if (st == 1)
		{
			switch (*format)
			{
			case 'c':
				ch = va_arg(args, int);
				leng += _putchar(ch);
				break;
			case 's':
				str = va_arg(args, const char *);
				leng += _puts(str);
				break;
			case '%':
				leng += _putchar('%');
				break;
			}
			st = 0;
		}

		format++;
	}
	return (leng);
}
