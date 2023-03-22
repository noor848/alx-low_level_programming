#include <stdio.h>
#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
 
void print_times_table(int n)
{
    int mult = 0;
	
    if(n > 0 && n <= 15)
    {
        for (int i = 0;i <= n;i++)
		{
            for (int j = 0;j <= n;j++)
			{
				mult = i * j;
				_putchar(mult + '0');

				if(j != n)
				{
					_putchar(',');
					_putchar('\t');
				}
                
			}
            _putchar('\n');         
            
            
		}
      
    }

}
