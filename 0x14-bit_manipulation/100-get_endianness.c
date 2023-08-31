#include "main.h"

/**
 * get_endianness - Will check if the  machine is little or big 
 * Return: will Return 0 for the big, 1 for  the little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

