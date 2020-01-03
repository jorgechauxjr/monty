#include "monty.h"
void open_and_read(char **argv)
{
	void (*p_func)(char *, int);
	FILE *fp;
	char *line_buf = NULL, *token = NULL, *top = NULL;
	size_t num_ch_readed = 0;
	unsigned int line_counter = 1;

	fp = fopen(argv[1], "r");

	if (fp == NULL)
		open_error(argv);

	while(getline(&line_buf, &num_ch_readed, fp) != EOF)
        {
                token = strtok(line_buf, " \n");
                line_counter++;
        }

/*p_func will receive the function to execute*/
	p_func = get_operation_code(token);

	p_func(top, atoi(token));


}
