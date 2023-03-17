#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: 0 (Sucess)
 */
int main(void)
{
	int n;
	int nb;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	nb = n % 10;

	if (nb > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n,  nb);
	} else if ((nb < 6) && nb != 0)
	{
		printf("Last digit of %d is %d and less than 5 and not 0\n", n, nb);
	} else
	{
		printf("Last digit of %d is %d and is 0\n", n, nb);
	}
	return (0);
}
