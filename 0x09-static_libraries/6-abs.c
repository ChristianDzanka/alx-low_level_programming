#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n < 0)
	{
	int absn;

	absn = n * -1;
	return (absn);
	}
	return (n);
}

