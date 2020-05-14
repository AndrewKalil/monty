#include "monty.h"

/**
 * main - main program to receive all functions and run opcode
 * @argc: count of arguements
 * @argv: array of arguements
 * Return: EXIT SUCCESS if not fail, EXIT FAILURE otherwise
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fputs("USAGE: monty file\n", stderr);
		exit(EXIT_FAILURE);
	}
	read_file(argv[1]);
	return (EXIT_SUCCESS);
}
