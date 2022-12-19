#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to print
*/
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	for (x -= 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}

	_putchar('\n');


}
