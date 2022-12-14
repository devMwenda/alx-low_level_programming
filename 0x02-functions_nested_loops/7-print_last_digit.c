#include "main.h"
/**
 * print_last_digit - function to print last digit of a number
 * @n: number to compute
 * Return: Always 0
*/
int print_last_digit(int n)
{
	n = n % 10;

	if (n > 0)
	{

	_putchar('0' + n);

	return (n);
	}
	else if (n < 0)
	{
	_putchar('0' - n);
	return (-n);
	}
	else
	{
		_putchar('0' + n)
		return (n);
	}

	return (0);
}
