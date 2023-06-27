#include "main.h"

/**
 * _strlen - a function that calculates the length of a string
 * @str: string
 *
 * Return: Length of the string
 */
unsigned int _strlen(const char *str)
{
	unsigned int length = 0;

	while (str && *str)
	{
		length++;
		str++;
	}
	return (length);
}

