#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pchar - prints the char at the top of the stack
 * @stack: stack to print
 * @line_number: current line number
 * Return: void
*/
void pchar(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL)
    {
            fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
            exit(EXIT_FAILURE);
    }
    if ((*stack)->n < 0 && (*stack)->n > 127)
    {
        fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
        exit(EXIT_FAILURE);
    }

    printf("%c\n", (*stack)->n);
}