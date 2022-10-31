#include "main.h"
#include <stdio.h>

/**
  * _puts - a function that prints a string, followed by a new line, to stdout
  * @str: An input character
  * Return: Nothing.
  */

void _puts(char *str)
{
	int string = 0;

	while (str[string] != '\0')
	{
		putchar(str[string]);
		string++;
	}
	putchar('\n');
}
