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
	int string = '0';

	while (s[string] != '\0')
		string++;
	while (string)
		putchar(s[--string]);
	putchar('\n');
}
