#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int w, e;

	for (w = 0; w <= 99; w++)
	{
		for (e = w + 1; e <= 99; e++)
		{
			putchar((w / 10) + '0');
			putchar((w % 10) + '0');
			putchar(' ');
			putchar((e / 10) + '0');
			putchar((e / 10) + '0');
				if (w == 98 && e == 99)
				{
					continue;
				}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
