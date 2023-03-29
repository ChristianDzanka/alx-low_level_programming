#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int i, j;
	/**
	 * Initialize two arrays, one for the characters to
	 * be replaced, and one for their replacements
	 */
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	/* Loop through each character of the string */
	for (i = 0; s[i] != '\0'; i++)
	{
	/* Loop through each character of the replacement arrays */
		for (j = 0; j < 10; j++)
		{
	/**
	 * If the current character matches a character to be replaced,
	 * replace it with the corresponding replacement character
	 */
			if (s[i] == a[j])
			{
				s[i] = b[j];
	/**
	 * Once a character has been replaced, move on to the next
	 * character in the string
	 */
			}
		}
	}

	return (s);
}
