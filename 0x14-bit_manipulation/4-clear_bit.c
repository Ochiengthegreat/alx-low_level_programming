#include "main.h"
/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number
 * @index: index to the bit to clear
 * Return: -1 (failure), 1 (success)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
