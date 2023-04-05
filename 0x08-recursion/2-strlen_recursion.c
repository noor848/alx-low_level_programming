#include "main.h"

/**
 * _strlen_recursion - a function that prints count of string
 *
 * @s: the string
 *
 * Return: count
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (_strlen_recursion(s + 1) + 1);
}
