include "main.h"

/**
 * get_bit - Return the bit's value at the index  dec nber
 * @n: nber to be swfvdjearch
 * @index: Bits Index
 *
 * Return: have to return the bit's value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}


