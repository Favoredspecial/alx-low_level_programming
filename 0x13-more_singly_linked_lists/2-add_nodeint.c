#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - add node at beginning of a listint_t list.
  *
  * @head: head of double element
  * @n: int add the list
  * Return: the address of the new element
  * /
 listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *emt;

	if (head == NULL)
		return (NULL);
	emt = malloc(sizeof(listint_t));
	if (emt == NULL)
		return (NULL);
	emt->n = n;
	emt->next = *head;
	*head = emt;
	return (emt);
}
