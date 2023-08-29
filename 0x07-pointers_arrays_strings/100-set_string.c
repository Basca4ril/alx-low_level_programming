#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * set_string - sets value of pointer to char
 * @s: pointer to pointer to char
 * @to: pointer to string
 */

void set_string(char **s, char *to)
{
	free(*s);

	*s = (char *)malloc(strlen(to) + 1);
	if (*s != NULL)
		strcpy(*s, to);
}
