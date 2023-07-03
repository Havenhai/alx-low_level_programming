#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @h: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*h)[8])
{
	int y;
	int t;

	for (y = 0; y < 8; y++)
	{
		for (t = 0; t < 8; t++)
			_putchar(h[y][t]);
		_putchar('\n');
	}
}
