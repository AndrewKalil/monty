#include "monty.h"

/**
 * free_list - frees the list, frees input, and closes file
 * @head: pointer to the head
 */
void free_list(stack_t **head)
{
	stack_t *ptr = *head;

	if (head == NULL)
		return;
	free(global.input);
	fclose(global.g_file);
	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
}
