#include "main.h"

/**
  * main - Entry point
  * _putchar - prints _putchar
  * Return: Always 0.
  */
int main(void)
{
	char guy[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(guy[i]);
	_putchar('\n');
	return (0);
}
