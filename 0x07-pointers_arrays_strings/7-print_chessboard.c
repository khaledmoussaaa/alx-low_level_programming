#include "main.h"

/**
*print_chessboard - hat prints the chessboard.
*@a: input fnction
*
*Return: no
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
