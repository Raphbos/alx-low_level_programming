#include <stdio.h>

/**
  * main - Entry point
  * putchar - print the output
  * Return: Always 0.
  */
int main(void)
{
	char low;
	char high;

	low = 'a';
	high = 'A';

	while (low <= 'z')
	{
		putchar(low);
		low++;
	}

	while (high <= 'Z')
	{
		putchar(high);
		high++;
	}
	putchar('\n');
	return (0);
}
