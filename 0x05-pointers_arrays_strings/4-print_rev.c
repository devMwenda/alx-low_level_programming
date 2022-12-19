#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: string to print
*/
void print_rev(char *s)
{
	for (*s == '\0'; *s >= 0; s--)
	{
		_putchar(*s);
	}

	_putchar('\n');


}
