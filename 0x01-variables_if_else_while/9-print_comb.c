#include <stdio.h>

/**
 * main - Entry point
 * Description: Print d in asc order
 * Return: Code 0 is translated as Success!
*/


int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + 48);

		if(i != 9)
		{
			putchar(',');
			putchar(' ');
	
		}

		i++
	}
	
	putchar('\n');

	return (0);
}
