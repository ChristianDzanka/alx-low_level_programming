#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char des;

	for (des = 'a'; des <= 'z'; des++)
		_putchar(des);

	_putchar('\n');
}
