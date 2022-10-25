#include "main.h"

/**
  * swap_int - a function that swaps the values of two integers
  * @a: An input integer to be swapped
  * @b: An input integer to be swapped
  * Return: Nothing.
  */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
