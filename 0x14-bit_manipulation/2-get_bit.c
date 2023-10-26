#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index in a  nber
 * @n: The number to examine
 * @index: The index of the bit to retrieve
 *
 * Return: value of the bit at the specified index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}


