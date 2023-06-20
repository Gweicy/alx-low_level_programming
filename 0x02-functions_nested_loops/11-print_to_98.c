#include "main.h"

/**
 * print_to_98 - Prints all numbers from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
	printf("%d", n);

	if (n <= 98)
	{
		for (int i = n + 1; i <= 98; i++)
		{
			printf(", %d", i);
		}
	}
	else
	{
		for (int i = n - 1; i >= 98; i--)
		{
			printf(", %d", i);
		}
	}

	printf("\n");
}

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);

	print_to_98(n);

	return (0);
}
