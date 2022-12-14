#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lowercase characters
 *@c: character to check
 * Return: Always 0
*/
int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != int c)
			return (0);
	}
}
