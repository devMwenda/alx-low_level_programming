#include "main.h"
/**
 * _strlen - returns length of string
 * @s: pointer to character
 * Return: string length
*/
int _strlen(char *s)
{
	int x = 0;

	for (; *s != '\0'; s++)
	{
		x++;
	}

	return (x);


}
