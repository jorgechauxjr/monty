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

	if (argc != 2)
		error_arguments();

	fp = fopen(argv[1], "r");

	if (fp == NULL)
		open_error(argv);

	return (0);
}
