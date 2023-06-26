#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list using the
 * insertion method in scending order
 * 
 * @list: Linked list to be sorted
 *
 * Return: Nothing!
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *h;

	if (!list || !(*list))
		return;

	h = (*list)->next;

	while (h)
	{
		tmp = h;
		while (tmp != *list && tmp->prev && (tmp->n < tmp->prev->n))
		{
			listint_t *curr, *prev, *next;

			curr = tmp;
			next = tmp->next;
			prev = tmp->prev;

			curr->next = prev;
			curr->prev = prev->prev;

			if (prev->prev)
				prev->prev->next = curr;

			prev->prev = curr;
			prev->next = next;
			if (next)
				next->prev = prev;
			if (prev == *list)
				*list = prev->prev;
			print_list(*list);
			tmp = prev->prev;
		}
		h = h->next;
	}
}