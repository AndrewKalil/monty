#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 * @head: pointer to the head
 * @count: line number
 */
void pint(stack_t **head, unsigned int count)
{
	stack_t *ptr = *head;

	if (ptr != NULL && head != NULL)
		printf("%d\n", ptr->n);
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", count);
		exit(EXIT_FAILURE);
	}
}
