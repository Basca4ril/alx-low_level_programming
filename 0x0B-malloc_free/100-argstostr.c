#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all arguments
 * @ac: argument counter
 * @av: pointer to string arguments
 * Return: concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i1, i, tlen = 0, ind = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		tlen += strlen(av[i]) + 1;

	char *res = (char *)malloc(sizeof(char) * (tlen + 1));

	if (res == NULL)
		return (NULL);

	for (i1 = 0; i1 < ac; i1++)
	{
		strcpy(res + ind, av[i]);
		ind += strlen(av[i]);
		res[ind] = '\n';
		ind++;
	}

	res[tlen] = '\0';

	return (res);
}
