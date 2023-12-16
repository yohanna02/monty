#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pstr - prints the stack as string
 * @stack: stack to print
 * Return: void
*/
void pstr(stack_t **stack)
{
    stack_t *temp = *stack;

    if (*stack != NULL)
    {
        while(temp != NULL)
        {
            if (temp->n <= 0 || temp->n > 127)
                break;
            printf("%c", temp->n);
            temp = temp->next;
        }
    }
    printf("\n");
}
