#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_list - all of a linked list
 * @h: points to the list_t list
 *
 * Return: the numb of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}

