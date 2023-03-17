#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int p, o, i;

	for (p = '0'; p <= '9'; p++)
	{
		for (o = p + 1; o <= '9'; o++)
		{
			for (i = o + 1; i <= '9'; i++)
			{
				if ((i != o) != p)
				{
					putchar(p);
					putchar(o);
					putchar(i);
					if (p == '7' && i == '9')
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
