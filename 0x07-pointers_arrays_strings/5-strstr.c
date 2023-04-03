#include "main.h"
/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *str1, *str2; /*Declaring variables*/

	while (*haystack != '\0')
	{
		str1 = haystack; /*values*/
		str2 = needle;

		/*Star WHILE*/
		while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2)
		{
			str1++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		str1++;
	}
	return (0);
}
