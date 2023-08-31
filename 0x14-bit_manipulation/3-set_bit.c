#include "main.h"

/**
 * set_bit - will set the given bit at a given indexex to 1
 * @n: points  the nber to be changede
 * @index: The bit's index  to be  set to 1
 *
 * Return:Must return  1 or -1 
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}


