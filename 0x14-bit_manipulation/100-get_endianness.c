#include "main.h"

/**
 * get_endianness - Determines the endianness of the machine.
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

