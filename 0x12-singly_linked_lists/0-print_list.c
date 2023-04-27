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
size_t print_list(const list_t *j)
{
	size_t s = 0;

	while (j)
	{
		if (!j->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", j->len, j->str);
		j = j->next;
		s++;
	}

	return (s);
}

