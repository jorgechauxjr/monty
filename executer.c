#include "monty.h"
extern int number;
int open_and_read(char **argv)
{
/* prototype from struct instructions*/
	void (*p_func)(stack_t **, unsigned int);

	FILE *fp;
	char *line_buf = NULL, *token = NULL, *token2 = NULL;
	size_t num_ch_readed = 0;
	unsigned int line_counter = 1;
	stack_t **top = NULL;

	fp = fopen(argv[1], "r");

	if (fp == NULL)
		open_error(argv);

	while(getline(&line_buf, &num_ch_readed, fp) != EOF)
        {
                token = strtok(line_buf, " ");
		if (strcmp(token, "push") == 0)
		{
			token2 = strtok(NULL," ");
			number = atoi(token2);

		return number;
		}

                line_counter++;
        }

/*p_func will receive the function to execute*/
	p_func = get_op_code(token, line_counter);

/* p_func takes the place of the function to execute: push, pall, etc*/
	p_func(top, line_counter);
	pall_stack(top, line_counter);
	return 0;
}
