#include <stdio.h>
/**
 * main - entry point
 * Return: 0 if execution a success
*/
int main(void)
{

	int x;

	char y;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
