#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Descritpion: 'get the last digit of a number'
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastDigit = n % 10;

printf("The string Last digit of %d is ", n);

if (lastDigit > 5)
{
	printf("greater than 5\n");
}
else if (lastDigit == 0)
{
	printf("0\n");
}
else
{
	printf("less than 6 and not 0\n");
}
	return (0);
}
