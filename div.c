#include "monty.h"

/**
 * _div - divides second element by first
 * @head: pointer to the head
 * @count: line number
 */
void _div(stack_t **head, unsigned int count)
{
	stack_t *ptr = *head;
	int num = 0;

	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		free_list(head);
		exit(EXIT_FAILURE);
	}
	if (head != NULL && ptr != NULL && ptr->next != NULL)
	{
		num = ptr->next->n / ptr->n;
		pop(head, count);
		(*head)->n = num;
	}
	else
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", count);
		free_list(head);
		exit(EXIT_FAILURE);
	}
}
