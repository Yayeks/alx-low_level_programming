#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: the index of the node to locate
 * Return: returns the nth node else return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
{
	unsigned int nodes;

	for (nodes = 0; nodes < index; nodes++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
