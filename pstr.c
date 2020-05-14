#include "monty.h"

/**
 * pstr - prints ascii character to form a string starting from head
 * @head: pointer to the head
 * @count: line number
 */
void pstr(stack_t **head, unsigned int count)
{
	stack_t *ptr = *head;

	(void)count;
	while (ptr != NULL)
	{
		if (isascii(ptr->n) && ptr->n != 0)
		{
			printf("%c", ptr->n);
			ptr = ptr->next;
		}
		else
			break;
	}
	printf("\n");
}
