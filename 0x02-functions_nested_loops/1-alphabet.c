#include "main.h"

/**
  * print_alphabet - prints all the alphabets
  * followed by a new line
  * Return: Nothing.
  */
void print_alphabet(void)
{
	char fish;

	fish = 'a';

	while (fish <= 'z')
	{
		_putchar(fish);
		fish++;
	}
	_putchar('\n');
}
