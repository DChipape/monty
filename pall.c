#include "monty.h"

/**
 * f_pall - prints all the stack elements
 * @head: pointer to stack head
 * @counter: not used line number
 *
 * Return: no return value
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
