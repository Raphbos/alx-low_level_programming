#include "main.h"

/**
 * _abs - Function that computes the absolute value of an integer
 * @c: the input value
 * Return: returns the interger value.
 */
int _abs(int c)
{
	if (c < 0)
	{
		c = (c * -1);
	}
	else
	{
		c = c;
	}
	return (c);
}
