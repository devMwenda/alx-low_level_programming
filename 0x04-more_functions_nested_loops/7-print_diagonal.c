#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 *@n: number of times to print
*/
void print_diagonal(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
			_putchar(' ');
			_putchar(92'\n');
			_putchar('\n');
	}
}
