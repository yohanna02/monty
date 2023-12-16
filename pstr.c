#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pstr - prints the stack as string
 * @stack: stack to print
 * @line_number: current line number
 * Return: void
*/
void pstr(stack_t **stack, unsigned int line_number)
{
    stack_t *temp = *stack;

    UNUSED(line_number);
    if (*stack == NULL)
    {
        printf("\n");
        return;
    }
    while(temp != NULL)
    {
        if (temp->n <= 0 || temp->n > 127)
            break;
        printf("%c", temp->n);
        temp = temp->next;
    }
    printf("\n");
}
