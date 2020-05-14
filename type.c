#include "monty.h"

/**
 * change_to_stack - changes to stack if in queue
 * @head: pointer to the head
 * @count: line number
 */
void change_to_stack(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;

	global.signal = 1;
}

/**
 * change_to_queue - changes to queue if in stack
 * @head: pointer to the head
 * @count: line number
 */
void change_to_queue(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;

	global.signal = 0;
}
