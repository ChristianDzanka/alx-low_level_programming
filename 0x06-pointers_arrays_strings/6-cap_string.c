#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int i, j;
	/* Define an array of separator characters */
	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	/* Loop through each character in the string */
	for (i = 0; s[i] != '\0'; i++)
	{
		/*
		 * If this is the first character in the string
		 * and it's lowercase, convert it to uppercase
		 */
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		/* Loop through each separator character */
		for (j = 0; j < 13; j++)
		{
			/*
			 * If the current character is a
			 * separator character...
			 */
			if (s[i] == spe[j])
			{
				/*
				 * ...and the next character is
				 * lowercase, convert it to uppercase
				 */
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	/* Return the modified string */
	return (s);
}
