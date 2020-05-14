#include "monty.h"

/**
 * execution - executes the instruction passed as arguement 1
 * @instruction: instruction to be executed
 * @count: line number
 * @head: pointer to the head of the list
 */
void execution(char *instruction, unsigned int count, stack_t **head)
{
	int i;

	instruction_t cmd[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", _div},
		{"mul", mul},
		{"mod", mod},
		{"stack", change_to_stack},
		{"queue", change_to_queue},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{NULL, NULL}
	};
	if (instruction[0] == '#')
		return;
	for (i = 0; cmd[i].opcode != NULL; i++)
	{
		if (strcmp(cmd[i].opcode, instruction) == 0)
		{
			cmd[i].f(head, count);
			return;
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", count, instruction);
	free_list(head);
	exit(EXIT_FAILURE);
}
