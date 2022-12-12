#include <stdio.h>
#include "main.h"

/**
  * print_to_98 - a function that prints all natural numbers from 'n' to '98'
  * followed by a new line
  *
  * @n: an input interger
  * Return: Nothing.
  */
void print_to_98(int n)
{
	int m;

	if (n <= 98)
	{
		for (m = n; m <= 98; m++)
		{
			if (m == 98)
			{
				printf("%d", m);
			}
			else
			{
				printf("%d, ", m);
			}
		}
	}
	else
	{
		for (m = n; m > 98; m--)
		{
			printf("%d, ", m);
		}
		printf("%d", 98);
	}
	printf("\n");
}
