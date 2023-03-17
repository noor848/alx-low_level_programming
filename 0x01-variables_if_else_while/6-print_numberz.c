#include <stdio.h>

/**
 * main - Entry point
 * Description: Print Alphabet 2
 * Return: Code 0 is translated as Success!
*/


int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n+48);
		n++;
	}
	putchar('\n');

	return (0);
}
