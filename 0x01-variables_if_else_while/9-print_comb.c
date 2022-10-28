#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0.
  */
int main(void)
{
	int num;

	num = '0';

	do {
		putchar (num);
		putchar (',');
		putchar (' ');
		num++;
	} while (num <= '9');

	putchar ('\n');
	return (0);
}
