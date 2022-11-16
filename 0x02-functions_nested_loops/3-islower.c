#include "main.h"

/**
  * _islower - prints 1 if c is lowercase or 0 if otherwise
  * @c:interger
  * Return: Always 0.
  */
int _islower(int c)
{
	char link;

	int k = 0;

	for (link = 'a'; link <= 'z'; link++)
	{
		if (k == c)
			link = 1;
	}
	return (link);
}
