#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>
/**
 * global_var - a struct containing global variables
 * @input: stores the buffer input
 * @stkque: determines whether a push will be stack or queue
 * @g_file: holds file descriptor of file to be opened
 * @num: num stored as a string to be used as arguemnt for push
 * @sparsed_str: variable to point to instruction string
 */
typedef struct global_var
{
	FILE *g_file;
	int signal;
	char *num;
	char *input;
} global_t;

extern global_t global;
global_t global;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void read_file(char *file_name);
void execution(char *instruction, unsigned int pos, stack_t **head);
void stack(stack_t **head, stack_t *node);
void queue(stack_t **head, stack_t *node);
void push(stack_t **head, unsigned int count);
void pall(stack_t **head, unsigned int count);
void pint(stack_t **head, unsigned int count);
void pop(stack_t **head, unsigned int count);
void swap(stack_t **head, unsigned int count);
void add(stack_t **head, unsigned int count);
void sub(stack_t **head, unsigned int count);
void _div(stack_t **head, unsigned int count);
void mul(stack_t **head, unsigned int count);
void mod(stack_t **head, unsigned int count);
void nop(stack_t **head, unsigned int count);
void pchar(stack_t **head, unsigned int count);
void pstr(stack_t **head, unsigned int count);
void rotl(stack_t **head, unsigned int count);
void rotr(stack_t **head, unsigned int count);
void change_to_stack(stack_t **head, unsigned int count);
void change_to_queue(stack_t **head, unsigned int count);
void free_list(stack_t **head);

void malloc_error(stack_t **head);
void push_error(stack_t **head, unsigned int count);

#endif
