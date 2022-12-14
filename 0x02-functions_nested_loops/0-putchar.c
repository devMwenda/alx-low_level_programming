#include <stdio.h>
#include "main.h"
/**
 *main - entry point
 *_putchar - writes character c to stdout
 * Return: 0 on success
*/
int main(void)
{
	char c[9] = "_putchar";
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(c[i]);

	}


	return (0);
}
