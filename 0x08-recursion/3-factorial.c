#include "main.h"

/**
 * factorial - prints the factorial of a given number
 * @n: input
 * Return: factorial of a n as an int
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
