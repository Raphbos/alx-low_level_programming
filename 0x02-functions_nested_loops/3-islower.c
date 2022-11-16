#include "main.h"

/**
  * _islower - a function that checks for lowercase characteri
  * @c: An input character
  * Return: 1 if character is lowercase, 0 if otherwise
  */
int _islower(int c)
{
	char link;

	int k = 0;

	for (link = 'a'; link <= 'z'; link++)
	{
		if (link == c)
			k = 1;
	}
	return (k);
}
