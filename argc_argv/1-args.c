#include <stdio.h>

/**
 * main - print the number of argc
 * @argc: argc
 * @*argv: argv
 */

int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", (argc - 1));
    		return (0);
}
