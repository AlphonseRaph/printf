#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * v_printf - Custom printf function
 * @format: The format string
 * @args: Variable arguments list
 */
int v_printf(const char *format, va_list args)
{

	int sum = 0;
	int state = 0;
	char ch;
	const char *str;
	
	if (format == NULL)
	{
		return (-1);
	}
	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
				state = 1;
			else
			{
				putchar(*format);
				sum++;
			}
		}
		else if (state == 1)
		{
			switch (*format)
			{
			case 'c':
				ch = va_arg(args, int);
				putchar(ch);
				sum++;
				break;
			case 's':
				str = va_arg(args, const char *);
				while (*str)
				{
					putchar(*str++);
					sum++;
				}
				break;
			}
			state = 0;
		}
		format++;
	}
	return (sum);
}
