#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a given function on each element of the array
 * @array: array
 * @size: size of the array
 * @action: pointer to the function
 * Return: (0) success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}