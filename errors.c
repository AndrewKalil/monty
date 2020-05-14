#include "monty.h"

/**
 * malloc_error - prints error for malloc fail to stderr
 * @head: pointer to head of list to be freed;
 */
void malloc_error(stack_t **head)
{
	fputs("Error: malloc failed\n", stderr);
	free_list(head);
	exit(EXIT_FAILURE);
}

/**
 * push_error - prints the error output for push function
 * @head: pointer to the head of list to be freed
 * @count: line number of error
 */
void push_error(stack_t **head, unsigned int count)
{
	fprintf(stderr, "L%d: usage: push integer\n", count);
	free_list(head);
	exit(EXIT_FAILURE);
}
