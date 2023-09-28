#include "main.h"

/**
 * flip_bits - counts the nber of bits to change
 * to get from one nber to another
 * @n: the 1st nber
 * @m: the 2nd nber
 *
 * Return: number of bits to be fliped
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

