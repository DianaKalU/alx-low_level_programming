#include <stdio.h>
#include "lists.h"

/**
 * prints  the elements of a linked list
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t sz = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		sz++;
	}

	return (sz);
}


