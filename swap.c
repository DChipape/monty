#include "monty.h"

/**
* op_swap - Exchange top two values of elements in stack
*
* @stack: pointer to point to a stack
* @line_number: the instruction line number
*
* Return: void. exit with -1 on a failure
**/

void op_swap(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (len(stack) < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
