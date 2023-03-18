#include <stdio.h>

/**
 * main - Entry point
 * Description: hex values 0-F
 * Return: Code 0 is translated as Success!
*/

int main(void)
{
	int num = 0, k = 0;	
	while (num<=9)
	{
		putchar(num + 48);
		num++;
	}
	while (k < 6)
	{
		putchar(num - 1 + 48 + 40 + k);
		k++;
	}
	putchar('\n');
	return (0);
}




