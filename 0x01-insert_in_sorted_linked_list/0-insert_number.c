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

  if (new == NULL)
    return (NULL);

  temp = *head;
  new->n = number;
  new->next = NULL;

  if (*head == NULL)
    *head = new;
  else
    {
      while (temp->next != NULL && temp->next->n < number)
	temp = temp->next;
      new->next = temp->next;
      temp->next = new;
    }
  return (new);
}
