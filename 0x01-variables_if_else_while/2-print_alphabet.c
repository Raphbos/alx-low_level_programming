#include <stdio.h>

/**
  * main - Entry point
  * putchar - print out characters
  * Return: Always 0.
  */
int main(void)
{
	char low;
	low = 'a';

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}
	putchar('\n');
	return (0);
}
