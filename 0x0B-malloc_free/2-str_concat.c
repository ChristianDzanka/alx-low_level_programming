#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	int x, y, l1, l2, l;
	char *new;

	l1 = l2 = 0;

	if (s1 != NULL)
	{
		x = 0;
		while (s1[x++] != '\0')
			l1++;
	}

	if (s2 != NULL)
	{
		x = 0;
		while (s2[x++] != '\0')
			l2++;
	}

	l = l1 + l2;
	new = (char *)malloc(sizeof(char) * (l + 1));
	if (new == NULL)
		return (NULL);

	for (x = 0; x < l1; x++)
		new[x] = s1[x];
	for (y = 0; y < l2; y++, x++)
		new[x] = s2[y];
	new[l] = '\0';

	return (new);
}
