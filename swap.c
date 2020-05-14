#include "monty.h"

/**
 * swap - swaps two first elements of a list
 * @head: pointer to the head
 * @count: line number
 */
void swap(stack_t **head, unsigned int count)
{
	stack_t *ptr = *head;
	int tmp = 0;

	if (head != NULL && ptr != NULL && ptr->next != NULL)
	{
		tmp = ptr->n;
		ptr->n = ptr->next->n;
		ptr->next->n = tmp;
	}
	else
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		free_list(head);
		exit(EXIT_FAILURE);
	}
}
