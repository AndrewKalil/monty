#include "monty.h"

/**
 * sub - swaps two first elements of a list
 * @head: pointer to the head
 * @count: line number
 */
void sub(stack_t **head, unsigned int count)
{
	stack_t *ptr = *head;
	int num = 0;

	if (head != NULL && ptr != NULL && ptr->next != NULL)
	{
		num = ptr->next->n - ptr->n;
		pop(head, count);
		(*head)->n = num;
	}
	else
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		exit(EXIT_FAILURE);
	}
}
