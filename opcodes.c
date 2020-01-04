#include "monty.h"
/**
 * get_op_code - contain the function that will perform the operation
 * @token: operation code
 * @line: line readed
 * Return: void
 */
void (*get_op_code(char *token, unsigned int line)) (stack_t **, unsigned int)
{
/*arreglo de estructuras*/
	int i;
	instruction_t operation[] = {
		{"push", push_stack},
		{"pall", pall_stack},
		{"pint", pint_stack},
		{"nop", _nop},
		{NULL, NULL}
	};
	for (i = 0; operation[i].opcode != NULL; i++)
	{
		if (strcmp(token, operation[i].opcode) == 0)
		{
			return (operation[i].f);
		}
	}
	invalidInstruction_error(token, line);
	return (NULL);
}
/**
 * _nop - doesn’t do anything.
 * @top: top of the stack (head)
 * @line: line
 * Return: void
 */
void _nop(stack_t **top, unsigned int line)
{
	(void)top;
	(void)line;
}
