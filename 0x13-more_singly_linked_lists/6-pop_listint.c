#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: A pointer to the pointer of the first node of the list
 *
 * Return: The head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *curr = *head;
	listint_t *remove = *head;

	if (*head == NULL)
		return (0);

	n = remove->n;
	*head = curr->next;
	free(remove);

	return (n);
}
