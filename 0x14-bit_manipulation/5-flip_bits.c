#include "main.h"

/**
 * flip_bits - Will count the nber of bits to beswap 
 * @n: 1st nber
 * @m: 2nd  nber
 *
 * Return:return the  nber of bit to  be change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}

