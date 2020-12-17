#include "lists.h"
/**
 * insert_node - inserts a new node in a sorted singly linked list
 * @head: double pointer to head of list
 * @number: integer to insert in the list
 *
 * Return:  address of the new node, or NULL if it failed
 */

listint_t *insert_node(listint_t **head, int number)
{
  listint_t *new;
  listint_t *temp;

  new = malloc(sizeof(listint_t));
  temp = malloc(sizeof(listint_t));

  if (new == NULL)
    return (NULL);

  temp = *head;

  while (temp->next != NULL)
    {
      if (temp->next->n > number)
	{
	  new = temp;
	  new->n = number;
	  return (new);
	}
      temp = temp->next;
    }
  return (new);
}
