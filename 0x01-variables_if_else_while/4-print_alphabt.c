#include <stdio.h>
/**
 * main - entry point
 * Return: 0 if executed successfully
*/
int main(void)
{

	char lwrcse;

	for (lwrcse = 'a'; lwrcse <= 'z'; lwrcse++)
	{
		if ((lwrcse != 'q') && (lwrcse != 'e'))
		{
			putchar(lwrcse);
		}
	}
	putchar('\n');
	return (0);
}
