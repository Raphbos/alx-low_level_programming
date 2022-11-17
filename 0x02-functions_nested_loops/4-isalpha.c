#include "main.h"

/**
  * _isalpha - function that checks for alphabetic character
  * @c: an input character
  * Return: returns 1 if c is a letter, lowercase or uppercase
  * and 0 if otherwise.
  */
int _isalpha(int c)
{
	char o;

	int y = 0;

	for ((o = 'a') || (o = 'A'); (o <= 'z') || (o <= 'Z'); o++)
	{
		if (o == c)
		{
			y = 1;
		}
	}
	return (y);
}
