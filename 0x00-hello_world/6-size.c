#include <stdio.h>
/**
 * main - entry point
 * sizeof - find size of data types
 * Return: 0 if executed successfully
*/
int main(void)
{
	char typeChar;

	int typeInt;

	long int typeLongInt;

	long long int typeLongLongInt;

	float typeFloat;

	printf("Size of a char: %zu byte(s)\n", sizeof(typeChar));

	printf("Size of an int: %zu byte(s)\n", sizeof(typeInt));

	printf("Size of a long int: %zu byte(s)\n", sizeof(typeLongInt));

	printf("Size of a long long int: %zu byte(s)\n", sizeof(typeLongLongInt));

	printf("Size of a float: %zu byte(s)\n", sizeof(typeFloat));

	return (0);
}
