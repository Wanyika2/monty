#include "monty.h"
#include "main.c"
/**
 * f_push - add node to the stack
 * @head: stack head
 * @line_number: line number in monty file
 */
void f_push(stack_t **stack, unsigned int line_number)
{
	int n, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++
		for (; bus.arg[j] != '\0'; j++)
		{
			if (flag == 1)
			{ fprintf(stderr, "L%d: usage: push integer\n", line_number);
				fclose(bus.file);
				free(bus.content);
				free_stack(*stack);
				exit(EXIT_FAILURE); }
			n = atoi(bus.arg);
			if (bus.lifi == 0)
				addnode(stack, n);
			else
				addqueue(stack, n);
		}
