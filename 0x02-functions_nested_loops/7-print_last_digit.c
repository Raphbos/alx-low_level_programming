#include "main.h"

/**
  * print_last_digit - a function that prints the last digit of a number
  * @a: the input value
  * Return: Returns the value of the last digit
  */
int print_last_digit(int a)
{
	int c;

	if (a < 0)
	{
		c = -1 * (a % 10);
	}
	else
	{
		c = a % 10;
	}

	_putchar((c % 10) + '0');
	return (c % 10);
}
