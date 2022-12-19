#include "main.h"
/**
 * rev_string - reverses string
 * @s: string characters
*/
void rev_string(char *s)
{
	for (*s == '\0'; *s >= 0; s--)
	{
		_putchar(*s);
	}
}
