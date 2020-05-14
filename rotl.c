#include "monty.h"

/**
 * rotl - rotates a list
 * @head: pointer to the head
 * @count: line number
 */
void rotl(stack_t **head, unsigned int count)
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
	ptr = first->next;
	first->next = NULL;
	ptr->prev = NULL;
	*head = ptr;
}
