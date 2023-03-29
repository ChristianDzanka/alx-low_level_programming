#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of string to concatenate
 * Return: a pointer to the dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	/* to reach the end of dest */
	while (dest[i] != '\0')
		i++;
	/* to copy the members of src to the end of dest */
	while (src[j] != '\0' && j < n)
		dest[i] = src[j];
		i++;
		j++;
	dest[i] = '\0';
	return (dest);
}
