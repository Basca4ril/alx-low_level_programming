#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * is_seperator - seperator
 * @c: parameter
 * Return: boolean value
 */

bool is_seperator(char c)
{
	char seperators[] = "\t\n,;.!?\"(){}";
	int i;

	for (i = 0; seperators[i] != '\0'; i++)
	{
		if (seperators[i] == c)
		{
			return (true);
		}
	}
	return (false);
}

/**
 * cap_string - capilizes string
 * @str: string
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	bool new_word = true;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_seperator(str[i]))
		{
			new_word = true;
		}
		else if (new_word && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			new_word = false;
		}
		else
		{
			str[i] = tolower(str[i]);
			new_word = false;
		}
	}

	return (str);
}
