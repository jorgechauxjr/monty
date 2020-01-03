#include "monty.h"
/**
 * push_stack -push (add) node to list.
 *Description: Function that push a new node at the beginning of stack_t stack
 * @top: element at the top of the stack (head)
 * @n: constant int value in the structure
 * Return: the address of the new element or NULL if fail (the new node)
 **/
stack_t *push_stack(stack_t **top, const int n)
{
	stack_t *newNode;

	newNode = malloc(sizeof(stack_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;

/* validate if empty list */
	if (*top == NULL)
	{
		newNode->next = NULL;
		*top = newNode;
		return (newNode);
	}
/* if is not empty list */
	newNode->next = *top;
	(*top)->prev = newNode;
	*top = newNode;

	return (newNode);
}
