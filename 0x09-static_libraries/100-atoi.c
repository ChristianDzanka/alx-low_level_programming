#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @str: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *str)
{
	int index = 0;
	int negative_signs_count = 0;
	int integer_value = 0;
	int string_length = 0;
	int integer_parsed = 0;
	int current_digit = 0;

	/* get the length of the string */
	while (str[string_length] != '\0')
		string_length++;
	/* process the string one character at a time */
	while (index < string_length && integer_parsed == 0)
	{
		/* check if the current character is a negative sign */
		if (str[index] == '-')
			negative_signs_count++;
		/* check if the current character is a digit */
		if (str[index] >= '0' && str[index] <= '9')
		{
			/* parse the digit and handle negative signs */
			current_digit = str[index] - '0';
			if (negative_signs_count % 2 != 0)
				current_digit = -current_digit;
			integer_value = integer_value * 10 + current_digit;
			/* indicate that at least one digit was parsed */
			integer_parsed = 1;
			/* check if there are no more digits to parse */
			if (str[index + 1] < '0' || str[index + 1] > '9')
				break;
			/* reset the integer_parsed flag if there are more digits */
			integer_parsed = 0;
		}
		index++;
	}
	/* if no digit was parsed, return 0 */
	if (integer_parsed == 0)
		return (0);

	return (integer_value);
}
