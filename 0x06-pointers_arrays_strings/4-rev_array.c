#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	/* iterate over the first half of the array */
	for (i = 0; i < n / 2; i++)
	{
		/* swap the elements at i and j */
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
