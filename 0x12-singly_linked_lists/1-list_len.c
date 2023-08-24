#include <stdlib.h>
#include "lists.h"

/**
 * Returns the number of elements in a linked list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t nb = 0;

	while (h)
	{
		nb++;
		h = h->next;
	}
	return (nb);
}


