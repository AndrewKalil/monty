#include "monty.h"

/**
 * rotr - rotates a list
 * @head: pointer to the head
 * @count: line number
 */
void rotr(stack_t **head, unsigned int count)
{
	stack_t *ptr = *head, *last = *head, *first = *head;

	(void)count;
	if (head == NULL)
		return;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = first;
	first->prev = last;
	last->prev->next = NULL;
	ptr = last;
	ptr->prev = NULL;
	*head = ptr;
}
