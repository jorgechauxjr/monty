#include "monty.h"
extern int number;
/**
 * push_stack -push (add) node to list.
 *Description: Function that push a new node at the beginning of stack_t stack
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
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
	if (*top == NULL)  /* validate if empty stack */
	{
		newNode->next = NULL;
		*top = newNode;
	}
	else /* if is not empty stack */
	{
	newNode->next = *top;
	(*top)->prev = newNode;
	*top = newNode;
	}
}
/**
 * pall_stack -print.
 *Description: Function that print the elements of a stack
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void pall_stack(stack_t **top, unsigned int line_number)
{
	stack_t *tmp = *top;
	(void)line_number;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
