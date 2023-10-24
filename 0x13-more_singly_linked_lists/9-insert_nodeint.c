#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer of first node of listint_t list.
 * @idx: the index of the list where the new node should be added.
 * @n: integer data for the new node.
 *
 * Return: Address of the new node or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	unsigned int i = 0;
	listint_t *curr = *head;

	if (!head || !*head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (curr)
	{
		if (i == idx - 1)
		{
			new_node->n = n;
			new_node->next = curr->next;
			curr->next = new_node;
			return (new_node);
		}
		i++;
		curr = curr->next;
	}
	free(new_node);
	return (NULL);
}
