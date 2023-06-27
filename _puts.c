#include <unistd.h>
#include "main.h"

/**
 * _puts - Prints a string and returns the length
 * @str: The string to be printed
 *
 * Return: Length of the string
 */
int _puts(const char *str)
{
	unsigned int leng = 0;

	if (str)
	{
		leng = _strlen(str);
		write(1, str, leng);
	}
	return (leng);
}

