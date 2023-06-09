#include "sort.h"

/**
 * insertion_sort_list - sorts list by inserting
 * @list: nodes point to first element on list
 *
 * Return: nothing
 */

void insertion_sort_list(listint_t  **list)

{
	listint_t *node, *temp, *temp2;

	if (list == NULL || *list == NULL)
		return;
	node =  *list;
	while ((node = node->next))
	{
		temp =  node;
		while (temp->prev && temp->n < temp->prev->n)

		{
			temp2 = temp->prev;
			if (temp2->prev == NULL)
				*list = temp;
			else
				temp2->prev->next = temp;
			if (temp->next != NULL)
				temp->next->prev = temp2;
			temp2->next =  temp->next;
			temp->next =  temp2;
			temp->prev =  temp2->prev;
			temp2->prev =  temp;
			print_list(*list);
		}
	}
}
