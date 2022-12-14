#include "main.h"
#include <stdio.h>
/**
 *_putchar - writes character c to stdout
 *@c: character to print
 * Return: 0 on success
*/
int _putchar(c)
{

	char c[8] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}


	return (0);
}
