#include "main.h"

int _sqrt_recursion1(int n, int k);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion1(n, 0));
}

/**
 * _sqrt_recursion1 - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @k: iterator
 *
 * Return: the resulting square root
 */
int _sqrt_recursion1(int n, int k)
{
	if (k * k > n)
		return (-1);
	if (k * k == n)
		return (k);
	return (_sqrt_recursion1(n, k + 1));
}
