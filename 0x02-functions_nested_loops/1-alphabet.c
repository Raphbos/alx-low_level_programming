#include "main.h"

/**
  * main - check the code
  *
  * print_alphabet - prints all the alphabets
  * Return: Always 0.
  */
int main(void)
{
	char fish;

	fish = 'a';

	while (fish <= 'z')
	{
		_putchar(fish);
		fish++;
	}
	_putchar('\n');
	return (0);
}
