#include <stdio.h>


/**
 * main - Entry point
 * Description: Print Alphabet reversed
 * Return: Code 0 is translated as Success!
*/


int main(void)
{
	char c = 'z';


	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}




