#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: A pointer to the head of the dlistint_t list
 * @n: The integer for the new node to contain
 * Return: If the function fails - NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *another, *final;

	another = malloc(sizeof(dlistint_t));
	if (another == NULL)
		return (NULL);

	another->n = n;
	another->next = NULL;

	if (*head == NULL)
	{
		another->prev = NULL;
		*head = another;
		return (another);
	}

	final = *head;
	while (final->next != NULL)
		final = final->next;
	final->next = another;
	another->prev = final;
	return (another);
}
