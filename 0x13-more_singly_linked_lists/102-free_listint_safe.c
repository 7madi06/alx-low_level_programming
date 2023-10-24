#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t linked list safely
 * @h: Pointer to pointer to the head of the list
 *
 * Return: Size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *current, *next;

	current = *h;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		node_count++;
		current = next;

		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}

	return (node_count);
}
