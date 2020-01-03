#include "monty.h"
extern int number;
/**
 * push_stack -push (add) node to list.
 *Description: Function that push a new node at the beginning of stack_t stack
 * @top: element at the top of the stack (head)
 * @n: constant int value in the structure
 * Return: the address of the new element or NULL if fail (the new node)
 **/
void push_stack(stack_t **top, unsigned int line_number)
{

	stack_t *newNode;

	(void) line_number;
	newNode = malloc(sizeof(stack_t));

	if (newNode == NULL)
		exit(EXIT_FAILURE);

	newNode->n = number;
	newNode->prev = NULL;

/* validate if empty list */
	if (*top == NULL)
	{
		newNode->next = NULL;
		*top = newNode;
	        
	}
/* if is not empty list */
	newNode->next = *top;
	(*top)->prev = newNode;
	*top = newNode;
}
