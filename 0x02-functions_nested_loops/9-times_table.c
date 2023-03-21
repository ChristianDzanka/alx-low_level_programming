#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num, mlp, pdt;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mlp = 1; mlp <= 9; mlp++)
		{
			_putchar(',');
			_putchar(' ');

			pdt = num * mlp;

			if (pdt <= 9)
			{
			_putchar(' ');
			}
			else
			{
				_putchar((pdt / 10) + '0');
			}
		_putchar((pdt / 10) + '0');

		}
		_putchar('\n');
	}
}
