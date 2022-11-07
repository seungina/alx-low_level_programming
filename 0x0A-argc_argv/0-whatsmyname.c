#include <stdio.h>
#include "main.h"

/**
* main - is the main function
* @argc: the number of command line arguments
* @argv: array of size argc
* Return: Always 0.
*/

int main(int argc, char **argv)
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
