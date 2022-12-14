#include "main.h"
#include <stdio.h>
/**
 *main - entry point
 *_putchar - writes character c to stdout
 * Return: 0 on success
*/
int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
	}


	return (0);
}
