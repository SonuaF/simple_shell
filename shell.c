#include "shell.h"
/**
 * main - Shell in c.
 * @argc: int
 * @argv: double pointer
 * Return: EXIT_SUCCESS
*/
int main(int argc, char **argv)
{
char *cmdline;
do {
cmdline = readline();
argv = splitline(cmdline, LINE_DELIM);
argc = execute(argv);
free(cmdline);
free(argv);
} while (argc);
return (EXIT_SUCCESS);
}
