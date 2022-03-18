#include "main.h"

/**
 * more_numbers -  function that prints 10 times the numbers, 0 to 14
 * ten times followed by a new line
 *
 * Return: void
 */

void more_numbers(void)
{
	int rows, columns;

	for (rows = 0; rows <= 10; rows++)
	{
		for (columns = 0; columns <= 14; columns++)
		{
			_putchar(columns);
		}
		_putchar('\n');
	}
}


