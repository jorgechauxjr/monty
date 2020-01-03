#include "monty.h"
/**
 * get_operation_code - contain the function that will perform the operation
 * @token: operation code
 * Return: void
 */
int (get_operation_code(char *token)) (stack_t **top, unsigned int line)
{
	int i;
	instruction_t operation[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};
	for (i = 0; operations[i].opcode != NULL; i++)
	{
		if (strcmp(token, operations[i].opcode) == 0)
		{
			return (operation[i].f);
		}
	}
	invalidInstruction_error(token, line);
}
