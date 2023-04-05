#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: the strings length to be counted
 * Return: the length of the string.
 */
int _strlen_recursion(char *s)
{
	int l = 0; /* to count the length of the string */

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}
	return (l);
}
