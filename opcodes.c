#include "monty.h"
/**
 * get_operation_code - contain the function that will perform the operation
 * @token: operation code
 * Return: void
 */
void (get_operation_code(char *token)) (stack_t **top, unsigned int line)
{
	int i;
	instruction_t operation[] = {
		{"push", push_stack},
		{NULL, NULL}
	};
	for (i = 0; operations[i].opcode != NULL; i++)
	{
		if (strcmp(token, operation[i].opcode) == 0)
		{
			return (operation[i].f);
		}
	}
	invalidInstruction_error(token, line);
}
