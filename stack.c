#include "monty.h"
extern int number;
/**
 * push_stack -push (add) node to list.
 *Description: Function that push a new node at the beginning of stack_t stack
 * @top: element at the top of the stack (head)
 * @n: constant int value in the structure
 * Return: void
 **/
void push_stack(stack_t **top, unsigned int line_number)
{
	stack_t *newNode;

	(void) line_number;
/*	printf("ENTER TO PUSHSTACK\n"); */
	newNode = malloc(sizeof(stack_t));

	if (newNode == NULL)
		exit(EXIT_FAILURE);
	/*	printf("ENTER 22222222222\n"); */
	newNode->n = number;
	newNode->prev = NULL;
/*	printf("----------SALIO 22222222222\n"); */
/* validate if empty list */
	if (*top == NULL)
	{
/* printf("ENTER 33333333333\n");*/
		newNode->next = NULL;
		*top = newNode;

	}
	else
	{
/* if is not empty list */
/* 	printf("ENTER 4444444444\n"); */
	newNode->next = *top;
	(*top)->prev = newNode;
	*top = newNode;
	}
/* 	printf("TERMINÓ DE AGREGAR ELEMENTO AL STACK \n"); */
}
/**
 * pall_stack -print.
 *Description: Function that print the elements of a stack
 * @top: element at the top of the stack (head)
 * @n: constant int value in the structure
 * Return: void
 **/
void pall_stack(stack_t **top, unsigned int line_number)
{
	stack_t *tmp = *top;

	(void)line_number;

	while(tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}

}
