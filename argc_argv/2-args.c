#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: The number of arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    int i;

    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return 0;
}
