#include <stdio.h>
/**
 * main :entry point
 * description: print digint 0-9
 * Return :ending te code success
 */


int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}

	printf("%d", num);

	return (0);
}
