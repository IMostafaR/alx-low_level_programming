#include "main.h"

/**
 * _sqrt_check - checks if a number has a natural square root
 * @n: number to check
 * @i: iterator
 * Return: natural square root of n or -1 if it doesn't have one
 */

int _sqrt_check(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-i);
	else
		return (_sqrt_check(n, i + 1));
}
