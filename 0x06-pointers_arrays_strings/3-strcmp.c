#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++) /* loop to check s1 and s2 */
	{
		if (s1[i] == '\0') /* check if s1 is at the end */
	{
		return (0); /* if they are equal, return 0 */
	}
	}
	return (s1[i] - s2[i]); /* else, return the ASCII diff */
}
