#include "main.h"
/**
 * void swap_int - a function that swaps the values of two integers.
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
