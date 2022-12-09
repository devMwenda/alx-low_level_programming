#include <stdio.h>
/**
 * main - entry point
 * Return: 0 if execution successful
*/
int main(void)
{
	int firstDigit;

	int secondDigit;

	for (firstDigit = 0; firstDigit < 9; firstDigit++)
	{
		for (secondDigit = firstDigit + 1; secondDigit < 10; secondDigit++)
		{
			putchar((firstDigit % 10) + '0');
			putchar((secondDigit % 10) + '0');

			if (firstDigit == 8 && secondDigit == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
