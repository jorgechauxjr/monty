#include "monty.h"
extern int number;
/**
 * open_and_read -main entry.
 *Description:Function that open, read and execute.
 * @argv: arguments received by parameter
 * Return: void
 **/
void open_and_read(char **argv)
{
/* prototype from struct instructions*/
	void (*p_func)(stack_t **, unsigned int);

	FILE *fp;
	char *buf = NULL, *token = NULL, command[1024];
	size_t len = 0;
	ssize_t line_size;
	unsigned int line_counter = 1;
	stack_t *top = NULL;

	fp = fopen(argv[1], "r");

	if (fp == NULL)
		open_error(argv);

	while ((line_size = getline(&buf, &len, fp)) != EOF)
	{
		token = strtok(buf, "\n\t\r ");
		strcpy(command, token);
		if (strcmp(token, "push") == 0)
		{
			token = strtok(NULL, " ");
			number = atoi(token);
			/*p_func will receive the function to execute*/
			p_func = get_op_code(command, line_counter);
      /* p_func takes the place of the function to execute: push, pall, etc*/
			p_func(&top, line_counter);
		}
		else
		{
			p_func = get_op_code(token, line_counter);
			p_func(&top, line_counter);
		}
		line_counter++;
	}
}
