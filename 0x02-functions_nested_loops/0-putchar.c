#include "main.h"
#include <stdio.h>
/**
 *main - entry point
 *_putchar - writes character c to stdout
 * Return: 0 on success
*/
int main(void)
{
	char c[8] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]'\n');
	}


	return (0);
}
