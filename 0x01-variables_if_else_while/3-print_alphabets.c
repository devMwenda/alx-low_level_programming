#include <stdio.h>

/**
 * main - entry point
 * Return: 0 if executed successfully
*/

int main(void)
{
	char lwrcse;

	char uppcse;

	for (lwrcse = 'a'; lwrcse <= 'z'; lwrcse++)
		for (uppcse = 'A'; uppcse <= 'Z'; uppcse++)
		{{
			 putchar(lwrcse);
			 putchar(uppcse);

		}}
	putchar('\n');
	return (0);
}
