#include "monty.h"

/**
 * f_pint - prints at the top a value
 * @head: a stack head pointer
 * @counter: the line number
 * Return: no return value
*/

void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
