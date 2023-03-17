#include <stdio.h>
/**
 *main :entry point
 * 
 * print charcte except q and e 
 *
 *
 *return 0
 *
 *
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
