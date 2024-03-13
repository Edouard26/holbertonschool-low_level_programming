#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: the string to calculate the length of
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
    int len;

    len = 0;
    while (s[len] != '\0')
        len++;

    return (len);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes of s2 to concatenate
 *
 * Return: a pointer to the newly allocated space in memory containing the concatenated strings, or NULL if the function fails
 * The returned pointer should point to a newly allocated space in memory which contains s1, followed by the first n bytes of s2, and null terminated
 * If n is greater or equal to the length of s2 then use the entire string s2
 * If NULL is passed, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat;
    unsigned int len1, len2, i;

    len1 = (s1 == NULL) ? 0 : _strlen(s1);
    len2 = (s2 == NULL) ? 0 : _strlen(s2);

    if (n >= len2)
        n = len2;

    concat = malloc(len1 + n + 1);

    if (concat == NULL)
        return (NULL);

    for (i = 0; i < len1; i++)
        concat[i] = s1[i];

    for (i = 0; i < n; i++)
        concat[len1 + i] = s2[i];

    concat[len1 + n] = '\0';

    return (concat);
}
