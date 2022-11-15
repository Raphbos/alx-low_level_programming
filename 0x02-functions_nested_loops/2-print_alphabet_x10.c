#include "main.h"

/**
  * print_alphabet_x10 - prints all the alphabets 10 times
  * Return: Nothing.
  */
void print_alphabet_x10(void)
{
	char fish;
	int i;

	i = 0;

	while (i < 10)
	{
		for (fish = 'a'; fish <= 'z'; fish++)
		{
			_putchar (fish);
		}
		i++;
		_putchar ('\n');
	}
}
