#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int 0)
{
	if (n <= 0)
	{
		_putchar('\n')
	}else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == j)
					_putchar('\\');
				else if (j < i)
					_putchar('_')
			}
			_putcha('\n');
		}
	}
}
