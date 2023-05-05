#include "main.h"

/**
 * set_bit - sets a value of a bit at an index to 1
 * @n: pointer to a number to be changed
 * @index: index of the bit to be set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
