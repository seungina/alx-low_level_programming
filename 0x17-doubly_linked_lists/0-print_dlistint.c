#include "lists.h"
/**
* print_dlistint - prints all the elements of a dlistint_t* list.
* @h: is the header of the double linked list
* Return: elements of list
**/

size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	else
	{
		printf("%d\n", h->n);
		return (1 + print_dlistint(h->next));
	}
}
