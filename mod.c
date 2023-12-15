#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * mod - Find's the modulos first two numbers
 * on the stack
 * @stack: stack to print
 * @line_number: current line number
 * Return: void
*/
void mod(stack_t **stack, unsigned int line_number)
{
    stack_t *temp = NULL;

    if (*stack == NULL)
    {
        fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
    }
    if ((*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
    }
    if ((*stack)->n == 0)
    {
      fprintf(stderr, "L%d: division by zero\n", line_number);
      exit(EXIT_FAILURE);
    }
    (*stack)->next->n = (*stack)->next->n % (*stack)->n;
    temp = *stack;
    *stack = (*stack)->next;
    free(temp);
}
