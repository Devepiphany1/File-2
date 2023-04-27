#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * list_len - the number of elements in a linked list are returned
 * @h: points to the list_t
 *
 * Return: no of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

