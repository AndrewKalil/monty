#include "monty.h"

/**
 * pall - prints all values on the stack or list
 * @head: pointer to the head
 * @count: line number
 */
void pall(stack_t **head, unsigned int count)
{
	stack_t *ptr = *head;

	(void)count;

	if (*head == NULL)
		return;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
}
