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
	int b;
	int d;

	for (let = 'A'; let <= 'Z'; let++)
	{
		if (let == c)
		{
			d = 0;
		}
	}
	for (let = 'a'; let <= 'z'; let++)
	{
		if (let == c)
		{
			d = 0;
		}
	}
	for (b = '0'; b <= '9'; b++)
	{
		if (b == c)
		{
			d = 1;
		}
	}
	return (d);
}
