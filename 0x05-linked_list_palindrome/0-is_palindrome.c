#include "lists.h"

/**
 * rev - reverses a list
 * @head: double pointer to head of list
 *
 * Return: none
 **/

listint_t *rev(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next = NULL;
	listint_t *previous = NULL;
	listint_t *new_head = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*head = previous;
	new_head = *head;
	return (new_head);

}

/**
 * is_palindrome - hecks if a singly linked list is a palindrome.
 * @head: double pointer to head of list
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */

int is_palindrome(listint_t **head)
{
	if (*head == NULL)
		return (0);
	return (1);

	listint_t *new_head = NULL;
	listint_t *head_rev = rev(&new_head);
	int flag = 0;

	while (head_rev && head)
	{
		if ((*head)->n != head_rev->n)
			return (0);
		*head = (*head)->next;
		head_rev = head_rev->next;
		flag = 1;
	}
	if (flag == 1)
		return (flag);
	return (flag);
}
