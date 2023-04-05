#include "main.h"

/**
 * _print_rev_recursion - a function that prints reverse string
 *
 * @s: the string
 *
 * Return: nothing
*/



void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	
	_puts_recursion(s+1);
}
