#include <stdio.h>
#include "main.h"

/**
  * print_times_table - a function that prints the 'n' times table, starting
  * with 0
  *
  * @n: an input interger
  * Return: Nothing.
  */
void print_times_table(int n)
{
	int m, j, c;

	if (n >= 0 && n <= 15)
	{
		for (m = 0; m <= n; m++)
		{
			for (j = 0; j <= n; j++)
			{
				c = m * j;

				if (c > 99)
				{
					if (j == n)
					{
						printf("%d", c);
					}
					else
					{
					printf("%d, ", c);
					}
				}
				else if (c > 9)
				{
					if (j == n)
					{
						printf(" %d", c);
					}
					else
					{
					printf(" %d, ", c);
					}
				}
				else if (j == 0)
				{
					if (j == n)
					{
						printf("%d", c);
					}
					else
					{
					printf("%d, ", c);
					}
				}
				else if (j != 0)
				{
					if (j == n)
					{
						printf("  %d", c);
					}
					else
					{
					printf("  %d, ", c);
					}
				}

			}
			printf("\n");
		}
		printf("\n");
	}
}
