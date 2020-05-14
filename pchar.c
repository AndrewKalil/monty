#include "monty.h"

/**
 * pchar - prints ascii character
 * @head: pointer to the head
 * @count: line number
 */
void pchar(stack_t **head, unsigned int count)
{
	stack_t *ptr = *head;
	int num = 0;

	if (!(isascii(ptr->n)))
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		exit(EXIT_FAILURE);
	}
	if (head == NULL || ptr == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty", count);
	}
	if (ptr != NULL)
	{
		num = ptr->n;
		printf("%c\n", num);
	}
}
