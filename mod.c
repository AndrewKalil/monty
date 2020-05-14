#include "monty.h"

/**
 * mod - divides second element by first and returns remainder
 * @head: pointer to the head
 * @count: line number
 */
void mod(stack_t **head, unsigned int count)
{
	stack_t *ptr = *head;
	int num;

	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		free_list(head);
		exit(EXIT_FAILURE);
	}
	if (head == NULL || ptr == NULL || ptr->next != NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", count);
		free_list(head);
		exit(EXIT_FAILURE);
	}
	num = ptr->next->n % ptr->n;
	pop(head, count);
	(*head)->n = num;
}
