#include "main.h"

/**
  * _isupper - a function that checks for uppercase character.
  * @c - a input character
  * Return: 1 if c is uppercase and 0 if otherwise.
  */
int _isupper(int c)
{
	char up;
	char low;
	int d = 0;

	for (up = 'A'; up <= 'Z'; up++) 
	{
		if (up == c)
		{
			d = 1;
		}
	}
	for (low = 'a'; low <= 'z'; low++)
	{
		if (low == c)
		{
			d = 0;
		}
	}
	return (d);
}
