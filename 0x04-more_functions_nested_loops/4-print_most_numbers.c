#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - prints 0-9 excluding 2 and 4
 *Return: Always 0;
*/
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 2 || x == 4)
			break;

		_putchar(x + '0');
	}
	_putchar('\n');
}
