#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 * @h: A pointer to the head of the dlistint_t list
 * @idx: The position to insert the new node
 * @n: The integer for the new node to contain
 * Return: If the function fails - NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *another;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	another = malloc(sizeof(dlistint_t));
	if (another == NULL)
		return (NULL);

	another->n = n;
	another->prev = temp;
	another->next = temp->next;
	temp->next->prev = another;
	temp->next = another;
	return (another);
}
