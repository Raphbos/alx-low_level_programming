#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0.
  */
int main(void)
{
	int num;
	char letter;

	num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	letter = 'a';

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
