#include "main.h"

/**
  * print_sign - function that prints the sign of a number
  * @n: an input character
  * Return: returns 1 and prints + if n is greater than zero
  * returns 0 and prints 0 if n is zero
  * returns -1 and prints - if n is less than zero
  */
int print_sign(int n)
{
	int i = 0;

	{
		if (n > 0)
		{
			_putchar('+');
			i = 1;
		}
		else if (n == 0)
		{
			_putchar('0');
			i = 0;
		}
		else if (n < 0)
		{
			_putchar('-');
			i = -1;
		}
	}
	return (i);
}
