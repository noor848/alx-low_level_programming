#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char n = 'a';

	/* your code goes there */
	while (n < 'z')
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
