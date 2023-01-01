#include "main.h"

/**
  * _isdigit - a function that checks for a digit (0 through 9)
  *
  * @c: an input digit
  * Return: Returns 1 if c is a digit and 0 if otherwise
  */
int _isdigit(int c)
{
	char let;
	int d = 0;

	for (let = '0'; let <= '9'; let++)
	{
		if (let == c)
		{
			d = 1;
		}
	}
	return (d);
}
