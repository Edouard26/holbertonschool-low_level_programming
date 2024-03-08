#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers passed as command-line arguments
 * @argc: The number of arguments
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, 1 if an error occurs
 */
int main(int argc, char *argv[])
{
    int i, sum = 0;
    char *endptr;
    unsigned long int num;

    for (i = 1; i < argc; i++)
    {
        num = strtoul(argv[i], &endptr, 10);

        if (*endptr != '\0')
        {
            printf("Error\n");
            return 1;
        }

        sum += num;
    }

    printf("%d\n", sum);

    return 0;
}
