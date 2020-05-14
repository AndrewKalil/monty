#include "monty.h"

/**
 * read_file - opens file and executes program corresponding to it
 * @file: name of file
 */
void read_file(char *file)
{
	FILE *fd;
	size_t size = 0;
	unsigned int line = 1;
	char *instruction = NULL, *delim = "\t\n ";
	stack_t *head = NULL;

	global.input = NULL;
	fd = fopen(file, "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}
	global.signal = 1;
	global.g_file = fd;
	while (getline(&global.input, &size, fd) != EOF)
	{
		if (*(global.input) == '\n')
		{
			line++;
			continue;
		}
		instruction = strtok(global.input, delim);
		if (instruction == NULL)
		{
			line++;
			continue;
		}
		global.num = strtok(NULL, delim);
		execution(instruction, line, &head);
		line++;
	}
	free_list(&head);
}
