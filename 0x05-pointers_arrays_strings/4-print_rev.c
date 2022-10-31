#include "main.h"
#include <stdio.h>

/**
  * print_rev - a function that
  * prints a string, in reverse, followed by a new line
  * @s: An input character
  * Return: Nothing.
  */
void print_rev(char *s)
{
	int reverse = '0';

	while (s[reverse] != '\0')
	{
		reverse++;
	}
	while (reverse)
	{
		putchar(s[--reverse]);
	}
	putchar('\n');
}
