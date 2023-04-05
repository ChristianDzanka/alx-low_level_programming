#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: integer
 * Return: 1 or 0
 */
int factorial(int n)
{
	int k;

	if (n == 1 || n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		k = n * factorial(n - 1);
	return (k);
}
