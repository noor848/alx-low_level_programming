#include "main.h"

/**
 * _pow_recursion - a function that finds the pow
 *
 * @x: positive number
 * @y: positive num 
 * Return: pow of @x
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == 0)
	{
		return (1);
	}
	
	return (x * _pow_recursion(x, y - 1));
}
