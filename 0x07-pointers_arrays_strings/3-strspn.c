#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int read = 0;

	a = 0;
	while (s[a] != '\0') /*Declaring WHILE *s */
	{
		b = 0;
		while (accept[b] != '\0') /*Declaring WHILE *accept*/
		{
			if (accept[b] == s[a]) /*Evaluate condition*/
			{
				read++; /*count number*/
				break;
			}

			b++;    /*add j+1*/
		}

		if (s[a] != accept[b]) /*If aren't equals*/
		{
			break;
		}
		a++; /*add x+1*/
	}
	return (read); /*return the value of count*/
}
