#include"monty.h"
/**
 * pint_error - print error message if the stack is empty
 * @line: line
 * Return: void
 */
void pint_error(unsigned int line)
{
	fprintf(stderr, "L%u: can't pint, stack empty\n", line);
	exit(EXIT_FAILURE);
}
/**
 * pop_error - print error message if the stack is empty
 * @line: line
 * Return: void
 */
void pop_error(unsigned int line)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line);
	exit(EXIT_FAILURE);
}
/**
 * swap_error - print err msg if stack contains less than two elements
 * @line: line
 * Return: void
 */
void swap_error(unsigned int line)
{
	fprintf(stderr, "L%u: can't swap, stack too short\n", line);
	exit(EXIT_FAILURE);
}
