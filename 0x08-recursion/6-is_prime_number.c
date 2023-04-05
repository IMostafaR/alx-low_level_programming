#include "main.h"

/**
 * check_prime - check if a number is prime
 * @n: the number to check
 * @div: the divisor to check n against
 * Return: 1 if n is prime, otherwise 0
 */

int check_prime(int n, int div)
{
	if (n <= 1)
		return (0);
	if (n % div == 0 && div < n)
		return (0);
	if (div == n)
		return (1);
	return (check_prime(n, div + 1));
}

/**
 * is_prime_number - check if a number is prime
 * @n: the number to check
 * Return: 1 if n is prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (check_prime(n, 2));
}
