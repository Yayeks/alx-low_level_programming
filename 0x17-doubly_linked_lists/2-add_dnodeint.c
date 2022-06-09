#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: A pointer to the head of the dlistint_t list
 * @n: The integer for the new node to contain
 * Return: If the function fails - NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *another;

	another = malloc(sizeof(dlistint_t));
	if (another == NULL)
		return (NULL);

	another->n = n;
	another->prev = NULL;
	another->next = *head;
	if (*head != NULL)
		(*head)->prev = another;
	*head = another;
	return (another);
}
