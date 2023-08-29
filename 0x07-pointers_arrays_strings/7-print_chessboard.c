#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: array
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			printf("%c ", a[row][col]);
		}
		printf("\n");
	}
}
