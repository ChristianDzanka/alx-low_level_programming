#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	/* to reach the end of the dest before appending src */
	while (dest[a] != '\0')
		a++;	/* now dest is at the end of its string */

	/* now to append src to the end of dest */
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	/* add the null character to dest */
	dest[a] = '\0';

	/* return the appended string */
	return (dest);
}
