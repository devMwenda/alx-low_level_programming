#include "main.h"
/**
 * print_line - draws a straight line
 *@n: number of times char _ is printed
*/
void print_line(int n)
{
	for (n = 0; n <= 9; n++)
	{
		if (n < 0 || n == 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
