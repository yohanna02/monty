#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * rotl - rotates the stack to the top.
 * @stack: stack to print
 * Return: void
*/
void rotl(stack_t **stack)
{
    stack_t *head = *stack;
    stack_t *tail = *stack;

    if (*stack == NULL)
        return;
    while (tail->next != NULL)
        tail = tail->next;
    
    (*stack) = head->next;
    tail->next = head;
    head->prev = tail;
    head->next = NULL;
}
