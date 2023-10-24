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
	if (*head == NULL)
	{
		return (-1);
	}

	listint_t *temp = *head;
	listint_t *prev = NULL;
	unsigned int i = 0;

	while (temp != NULL && i < index)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		return (-1);
	}

	if (prev == NULL)
	{
		*head = temp->next;
	} else
	{
		prev->next = temp->next;
	}

	free(temp);
	return (1);
}
