#include <stdio.h>
/**
 * main - entry point
 * Return: 0 if executed successfully
*/
int main(void)
{

	char lwrRev;

	for (lwrRev = 'z'; lwrRev >= 'a'; lwrRev--)
	{
		putchar(lwrRev);
	}
	putchar('\n');
	return (0);
}
