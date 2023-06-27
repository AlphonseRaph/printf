#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * v_printf - printf function
 * @format: The format string
 * @args: Variable arguments list
 *
 * Return: The number of characters printed
 */
int v_printf(const char *format, va_list args)
{
        int st = 0;
        char ch;
        const char *str;
        int leng = 0;

        while (*format)
        {
                if (st == 0)
                {
                        if (*format == '%')
                                st = 1;
                        else
                        {
                                putchar(*format);
                                leng++;
                        }
                }
                else if (st == 1)
                {
                        switch (*format)
                        {
                        case 'c':
                                ch = va_arg(args, int);
                                putchar(ch);
                                leng++;
                                break;
                        case 's':
                                str = va_arg(args, const char *);
                                while (*str)
                                {
                                        putchar(*str++);
                                        leng++;
                                }
                                break;
                        case '%':
                                putchar('%');
                                leng++;
                                break;
                        }
                        st = 0;
                }

                format++;
        }
        return (leng);
}

