#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: erray of integers
 * @n: is the number of elements of the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
