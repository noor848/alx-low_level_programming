#include <stdio.h>
/**
 * main - Entry point
 * Description: Print Alphabet
 * Return: Code 0 is translated as Success!
*/

int main() {
	
	char s = 'a', k = 'A';
    	while (s <= 'z')
    	{	
        	putchar(s);
        	s++;
    	}
     	while (k <= 'Z')
    	{
        	putchar(k);
        	k++;
    	}
    
	putchar('\n');
    
    	return 0;
}
