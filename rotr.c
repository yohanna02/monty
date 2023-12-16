#include "monty.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * rotr - rotates the stack to the bottom.
 * @stack: stack
 * Return: void
*/
void rotr(stack_t **stack)
{
    stack_t *head = *stack;
    stack_t *tail = *stack;

    if (*stack == NULL)
        return;
    while (tail->next != NULL)
        tail = tail->next;
    if (tail->prev == NULL)
        return;
    
    (*stack) = tail;
    tail->prev->next = NULL;
    tail->prev = NULL;
    tail->next = head;
}
