#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
        char alpha,alphab;

        for (alpha='a';alpha<='z';alpha++)
                putchar(alpha);
	for (alphab='A';alphab<='Z';alphab++)
		putchar(alphab);
        putchar('\n');
        return (0);
}
