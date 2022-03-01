#include "main.h"

/**
 *
 *
 *
 */

void print_chessboard(char (*a)[8])
{	
	int col, fil;

	for (col = 0; col < 8; col++)
	{
		for (fil = 0; fil < 8; fil++)
		{
		_putchar(a[col][fil]);
	
		}
	}
	_putchar('\n');
}
