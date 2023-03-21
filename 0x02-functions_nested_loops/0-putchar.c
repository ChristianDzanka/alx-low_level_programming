#include "main.h"
/**
 * main - prints _putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
char fte[] = "_putchar\n";
int i;

while (fte[i] != '\0')
{
putchar(fte[i]);
i++;
}
return (0);
}
