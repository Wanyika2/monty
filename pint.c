#include "monty.h"
/**
 * f_pint - prints the top
 * @stack: stack
 * @counter: line_number
 * Return: no return
 */
void f_pint(stack_t **stack, unsigned int counter)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty/n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
