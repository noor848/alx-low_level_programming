#include "main.h"

/**
 * _puts_recursion - a function that prints reverse string
 *
 * @s: the string
 *
 * Return: nothing
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s+1);
	_putchar(*s);
}
