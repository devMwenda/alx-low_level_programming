#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10 - prints alphabet ten times
 *Return: Always 0
*/
void print_alphabet_x10(void)
{
	int x, y;

	for (x = 0; x < 10; x++)

	{
		for (y = 97; y <= 122; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}

}
