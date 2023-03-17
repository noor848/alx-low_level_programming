#include <stdio.h>
/**
 * main - Entry point
 * Description: Print Alphabet 2
 * Return: Code 0 is translated as Success!
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q')
			if (c != 'e')
				putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
