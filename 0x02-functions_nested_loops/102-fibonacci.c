#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int fb1 = 1;
	int fb2 = 2;
	int fnxt;
	int i;

	printf("%d, %d", fb1, fb2);

	for (i = 3; i <= 50; i++)
	{
		fnxt = fb1 +fb2;
		if (i < 50)
		{
			printf("%d, ", fnxt);
		}
		else
		{
			printf("%d", fnxt);
		}
		fb1 = fb2;
		fb2 = fnxt;
	}
	printf("\n");
	return (0);
}
