#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - Creates a string from the concatenation of all the
 * arguments of a program
 * @ac: Number of arguments
 * @av: The array of arguments
 * Return: a pointer to a new string, or NULL if it fails
 * Each argument should be followed by a \n in the new string
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	char *str;
	int length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
			length++;
	}
	str = malloc(sizeof(char) * (length + i + 1));
	if (str)
	{
		length = 0;
		for (i = 0; i < ac; i++)
		{
			for (j = 0; *(*(av + i) + j) != '\0'; j++)
			{
				*(str + length) = *(*(av + i) + j);
				length++;
			}
			*(str + length) = '\n';
			length++;
		}
		*(str + length) = '\0';
		return (str);
	}
	else
	{
		return (NULL);
	}
}
