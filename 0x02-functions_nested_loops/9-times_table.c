#include "main.h"

/**
  * times_table - a function that prints the 9 times table, starting with 0
  * Return: Nothing.
  */
void times_table(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			int c = a * b;

			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
