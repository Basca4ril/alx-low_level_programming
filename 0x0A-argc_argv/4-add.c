#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: pointer to string argument(s)
 * Return: 1 if number is less than 0 or is not a number
 */
int main(int argc, char *argv[])
{
	int tot = 0, i, j, num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);

		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		tot += num;
	}
	printf("%d\n", tot);
	return (0);
}
