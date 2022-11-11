#include "main.h"

/**
  * main - Entry point
  * putchar - prints _putchar
  * Return: Always 0.
  */
int main(void)
{
	char guy[8] = "_putchar";
	int i;

	i = 0;

	while (i < 8)
	{
		 _putchar(guy[i]);
		 i++;
	}
	_putchar('\n');
	return (0);
}
