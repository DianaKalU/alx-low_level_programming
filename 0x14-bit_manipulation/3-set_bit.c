#include "main.h"

/**
 * set_bit - Sets the value of a bit at a specified index to 1.
 * @n: pointer to the nber to be modified
 * @index: index of the bit to change
 *
 * Return: 1 if it succeed, -1 if its fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

