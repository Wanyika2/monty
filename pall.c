#include "monty.h"
#include "main.c"
/**
 * pall - prints values on the stack
 * @stack; The stack
 * @line_number: Line number in monty file
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	current = *stack;
	if (current == NULL)
		return;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
