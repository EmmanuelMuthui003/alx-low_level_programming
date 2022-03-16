#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number
 *
 * @n: - n is the integer
 *
 * Return: value of the last digit of integer r
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (n < 0)
	{
		lastDigit = lastDigit * -1;
	}

	_putchar(lastDigit + '0');

	return (lastDigit);
}
