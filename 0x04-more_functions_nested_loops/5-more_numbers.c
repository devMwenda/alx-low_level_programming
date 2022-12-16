#include "main.h"
/**
 * more_numbers - prints 0-14 ten times
 * Return: Always 0;
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
		_putchar(j + '0');
		if (j == 14)
			continue;
		}
		_putchar('\n');

	}
	_putchar('\n');
}
