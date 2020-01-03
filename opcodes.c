#include "monty.h"
/**
 * get_operation_code - contain the function that will perform the operation
 * @token: operation code
 * Return: void
 */
void (*get_op_code(char *token, unsigned int line)) (stack_t **, unsigned int)
{
/*arreglo de estructuras*/
	int i;
	instruction_t operation[] = {
		{"push", push_stack},
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
	return NULL;
}
