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

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number to find square root of
 * Return: natural square root of n or -1 if it doesn't have one
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (_sqrt_check(n, 1));
}
