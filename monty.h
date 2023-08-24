#ifndef MONTY_H
#define MONTY_H

#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

/**
 * struct stack_s - doubly linked list
 * representation of a stack or the queue
 * @n: value of integer stored
 * @prev: points that poits to the previous
 * element of the stacko or the queue
 * @next: points to the next element in stack or queue
 *
 * Description: a doubly linked list node structure
 * for stack, queues, LIFO, FIFO monty project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct bus_s - a variables that holds arguments, file, line content
 * @arg: value of an argument
 * @file: pointer to the monty file
 * @content: the line content
 * @lifi: flag to change between stack and queue
 * Description: structure carries values via the program
 */

typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;

/**
 * struct instruction_s - opcode and the corresponding function
 * @opcode: the string of opcode
 * @f: function to handle all the operations of opcode
 *
 * Description: opcode and function tructure
 * for stack, queues, LIFO, FIFO in monty project
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void f_rotl(stack_t **head, unsigned int counter);
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void f_queue(stack_t **head, unsigned int counter);
void f_stack(stack_t **head, unsigned int counter);
void f_mul(stack_t **head, unsigned int counter);
void f_mod(stack_t **head, unsigned int counter);
void f_pchar(stack_t **head, unsigned int counter);
void f_pstr(stack_t **head, unsigned int counter);
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void f_push(stack_t **head, unsigned int number);
void f_pall(stack_t **head, unsigned int number);
void f_pint(stack_t **head, unsigned int number);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void f_pop(stack_t **head, unsigned int counter);
void f_swap(stack_t **head, unsigned int counter);
void f_add(stack_t **head, unsigned int counter);
void f_nop(stack_t **head, unsigned int counter);
void f_sub(stack_t **head, unsigned int counter);
void f_div(stack_t **head, unsigned int counter);

#endif
