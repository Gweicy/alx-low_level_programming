#include "main.h"

/**
 * times_table - Prints the 9 times table.
 *
 * Return: No return value.
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;
			_putchar(product + '0');
			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

