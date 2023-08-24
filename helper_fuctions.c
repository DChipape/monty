#include "monty.h"

/**
 * free_stack - frees a stack
 *
 * @stack: there pointer to the stack top
 *
 * Return: void
**/
void free_stack(stack_t *stack)
{
	stack_t *next;

	while (stack != NULL)
	{
		next = stack->next;
		free(stack);
		stack = next;
	}
}

/**
* len - length of stack
*
* @stack: there pointer that point to stack
*
* Return: unsigned int
**/
unsigned int len(stack_t **stack)
{
	stack_t *current;
	unsigned int l = 0;

	current = *stack;
	while (current)
	{
		current = current->next;
		l++;
	}
	return (l);
}
