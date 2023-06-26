#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 *
 * Description: Reverses the order of characters in a string.
 * Return: void
 */
void rev_string(char *s)
{
	char rev;
	int counter = 0;
	int i;
	int length = 0;

	/* Find the length of the string */
	while (s[length] != '\0')
		length++;

	/* Reverse the string */
	for (i = 0; i < length / 2; i++)
	{
		rev = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = rev;
	}
}

