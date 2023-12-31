#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node;
	unsigned int i = 0;
	listint_t *temp_h = *head;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		temp_node = temp_h->next;
		*head = temp_node;
		free(temp_h);
		return (1);
	}
	while (temp_h)
	{
		if (i == index - 1)
		{
			temp_node = temp_h->next;
			temp_h->next = temp_node->next;
			free(temp_node);
			return (1);
		}
		i++;
		temp_h = temp_h->next;
	}
	return (-1);
}
