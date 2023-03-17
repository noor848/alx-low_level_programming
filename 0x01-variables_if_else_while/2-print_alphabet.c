#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Print Alphabet
 * Return: Code 0 is translated as Success!
*/

int main(void)
{
	char n = 'a';

	/* your code goes there */
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
