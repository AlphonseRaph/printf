#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * v_printf - Custom printf function
 * @format: The format string
 * @args: Variable arguments list
 */
void v_printf(const char *format, va_list args)
{
	int state = 0;
	char ch;
	const char *str;

	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
				state = 1;
			else
				putchar(*format);
		}
		else if (state == 1)
		{
			switch (*format)
			{
			case 'c':
				ch = va_arg(args, int);
				putchar(ch);
				break;
			case 's':
				str = va_arg(args, const char *);
				while (*str)
				{
					putchar(*str++);
				}
				break;
			}
			state = 0;
		}

		format++;
	}
}
