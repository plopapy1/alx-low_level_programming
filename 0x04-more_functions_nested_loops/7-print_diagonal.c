#include "main.h"
/**
  * print_diagonal - draws diagonal
  * @n: the number of times to print
  * Return: empty
  */

void print_diagonal(int n)
{
	int x, y;

	if  (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x <= n; x++)
		{
			_putchar(32);
			for (y = 0; y < x; y++)
			{
				_putchar(92);
			}
			 _putchar('\n');
		}
	}
}
