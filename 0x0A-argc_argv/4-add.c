#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, n = 0, sum = 0;
	char *arg;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		arg = *(argv + i);
		while (*arg != '\0')
		{
			if(!isdigit(*arg))
			{
				printf("Error\n");
				return (1);
			}
			arg++;
		}
		n = atoi(*(argv + i));
		if (n < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += n;
	}
printf("%d\n", sum);
return (0);
}
