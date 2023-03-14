#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* argstostr - a function that concatenates all the arguments of your program
*@ac: count of args passed to the function
*@av:array of arguments
*
*Return: pointer to the new string
*/

char *argstostr(int ac, char **av)
{
	char *new_string = NULL;
	int k = 0, i = 0, j = 0, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
			j = 0
		while (av[i][j] != '\0'
			k++;
			j++;
			i++;
	k = k + ac + 1;
	new_string = malloc(sizeof(char) * k);
	if (new_string == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			new_string[l] = av[i][j];
			l++;
		new_string[i] = '\n'
		l++;
	return (new_string);
}
