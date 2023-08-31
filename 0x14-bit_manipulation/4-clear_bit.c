#include "main.h"

/**
 * clear_bit -Must  set a given value Bits to 0
 * @n: points to the nber to be changed
 * @index: Bit's index  to be  cleared
 *
 * Return: Must return 1 or -1 
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}


