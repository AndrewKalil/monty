#include "monty.h"

/**
 * check_num - checks if a string is a number
 * @str: string to be checked
 * Return: 0 if not a number or 1 if it is
 */
int check_num(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	if (str[0] == '-')
		str++;
	while (str[i])
	{
		if (isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

/**
 * push - adds a node to the top of the stack or queue
 * @head: pointer to the head
 * @count: line number
 */
void push(stack_t **head, unsigned int count)
{
	stack_t *node = malloc(sizeof(stack_t)), *ptr = *head;

	if (head == NULL)
		exit(EXIT_FAILURE);
	if (check_num(global.num) == 0)
		push_error(head, count);
	if (node == NULL)
		malloc_error(head);
	if (*head == NULL)
	{
		node->next = NULL;
		node->prev = NULL;
		*head = node;
	}
	node->n = atoi(global.num);
	if (ptr != NULL)
	{

		if (global.signal)
		{
			ptr->prev = node;
			node->prev = NULL;
			node->next = ptr;
			*head = node;
		}
		else
		{
			while (ptr->next != NULL)
			{
				ptr = ptr->next;
			}
			ptr->next = node;
			node->prev = ptr;
			node->next = NULL;
		}
	}
}
