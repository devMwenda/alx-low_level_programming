#include "main.h"
/**
 * swap_int - swaps values sof two integers
 * @a: first integer
 * @b: second integer
*/
void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;

}
