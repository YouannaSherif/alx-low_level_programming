#include "lists.h"
/**
 * print_list -prints all the elements of a linked list
 * @h: a pointer to a struct
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int cnt = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)");
		h = h->next;
		cnt++;
	}
	return (cnt);
}
