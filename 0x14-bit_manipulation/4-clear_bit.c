#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a specified index to 0.
 * @n: pointer to the nber to be modified
 * @index: index of the bit to change
 *
 * Return: 1 if successful, -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

