#include "monty.h"

/**
 * pop - removes the top element of a stack
 * @head: pointer to the head
 * @count: line number
 */
void pop(stack_t **head, unsigned int count)
{
	stack_t *tmp = *head;

	if (tmp != NULL)
	{
		tmp = *head;
		*head = tmp->next;
		tmp->prev = NULL;
		free(tmp);
	}
	else
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", count);
		exit(EXIT_FAILURE);
	}
}
