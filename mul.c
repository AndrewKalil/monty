#include "monty.h"

/**
 * mul - multiplies first two elements of a list
 * @head: pointer to the head
 * @count: line number
 */
void mul(stack_t **head, unsigned int count)
{
	stack_t *ptr = *head;
	int num;

	if (head != NULL && ptr != NULL && ptr->next != NULL)
	{
		num = ptr->next->n * ptr->n;
		pop(head, count);
		(*head)->n = num;
	}
	else
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		free_list(head);
		exit(EXIT_FAILURE);
	}
}
