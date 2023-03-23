#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: character to check
 *
 * Return: 0 or 1
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	if (n == 0 || n < 0)
	{
		_putchar('\n');
		n--;
	}
}
