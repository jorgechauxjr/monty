#include "monty.h"
/**
 *_swap -main entry.
 *Description: Function that swaps the top 2 elements of stack
 * @top: element at the top of the stack (head)
 * @line_number: constant int value in the structure
 * Return: void
 **/
void _swap(stack_t **top, unsigned int line_number)
{
	stack_t *tmp, *two, *tree;

	if (*top == NULL || (*top)->next == NULL)
		swap_error(line_number);

	tmp = *top;
	two = tmp->next;
	tree = tmp->next->next;

	*top = two;
	two->next = tmp;
	two->prev = NULL;
	tmp->prev = two;
	tmp->next = tree;
	tree->prev = tmp;
}
