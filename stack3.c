#include "monty.h"
/**
 *_mod -main entry.
 *Description: module of the second top element of the stack by the top element
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void _mod(stack_t **top, unsigned int line_number)
{
	stack_t *tmp;

	if (*top == NULL || (*top)->next ==  NULL)
		mod_error(line_number);

	if ((*top)->n == 0)
		div_error2(line_number);

	tmp = (*top)->next;
	tmp->n = (tmp->n) % (*top)->n;
	pop_stack(top, line_number);
}
/**
 *rotl_stack -main entry.
 *Description: top element of the stack becomes the last one, and the second
 * top element becomes the first one.
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void rotl_stack(stack_t **top, unsigned int line_number)
{
	stack_t *new_top, *tmp, *new_last;

	if (*top == NULL || (*top != NULL && (*top)->next == NULL))
		return;

	new_last = *top;
	tmp = *top;
/* tmp goes to the last element of the stack */
	while (tmp->next != NULL)
		tmp = tmp->next;

	new_top = (*top)->next;
	*top = new_top;
	new_top->prev = NULL;
	new_last->next = NULL;
	new_last->prev = tmp; /*here tmp is the last element of the stack*/
	tmp->next = new_last;

	(void)line_number;
}
