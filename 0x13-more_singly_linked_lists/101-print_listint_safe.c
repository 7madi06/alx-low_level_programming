#include "lists.h"

/**
 * print_listint_safe - Prints a linked list, even if it has a loop
 * @head: Pointer to the head node of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *slow, *fast;

	slow = head;
	fast = head;

	while (slow != NULL && fast != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		node_count++;

		slow = slow->next;
		fast = fast->next;

		if (fast != NULL)
		{
			printf("[%p] %d\n", (void *)fast, fast->n);
			node_count++;

			fast = fast->next;
		}

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			node_count++;
			exit(98);
		}
	}

	return (node_count);
}
