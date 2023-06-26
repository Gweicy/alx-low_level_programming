#include "main.h"
/**
 * puts2 - Prints every other character of string, starting from first one
 * @str: Input string
 *
 * Description: This function prints every other character of a string,
 *              starting from the first character.
 * Return: void
 */
void puts2(char *str)
{
	int length = 0;
	int i;

	/* Find the length of the string */
	while (str[length] != '\0')
		length++;

	/* Print every other character */
	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
