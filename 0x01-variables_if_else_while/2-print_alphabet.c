#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
* input first character
* print the whole characterfrom a..z
*
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
