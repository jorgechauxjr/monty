#include"monty.h"
/**
 * main - Main entry
 * Description: Monty bytecodes files interpreter
 * @argc: total of arguments
 * @argv: The arguments, monty files
 * Return: int
 */
int main(int argc, char **argv)
{
	FILE *fp;
	char *line_buf = NULL, *token = NULL;
	size_t num_ch_readed = 0;
	unsigned int line_counter = 1;

	if (argc != 2)
		error_arguments();

	fp = fopen(argv[1], "r");

	if (fp == NULL)
		open_error(argv);
	while(getline(&line_buf, &num_ch_readed, fp) != EOF)
	{
		token = strtok(line_buf, " \n");
		line_counter++;
	}


	return (0);
}
