#include "main.h"

/**
 * sqrt_a - return the natural square root
 * of a number
 *
 * @a: input
 * @b: iterator
 * Return: sqaure root or -1
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
		return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root
 * of a number
 * @n: input
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}

