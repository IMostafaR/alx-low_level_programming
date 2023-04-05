#include "main.h"

/**
 *_strlen - calculate the length of a string
 *@s: string to calculate length of
 *Return: length of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen(s + 1) + 1);
}

/**
 *check_palindrome - check if a string is a palindrome
 *@s: string to check
 *@start: starting index
 *@end: ending index
 *Return: 1 if palindrome, 0 if not
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 *is_palindrome - check if a string is a palindrome
 *@s: string to check
 *Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len <= 1)
		return (1);
	return (check_palindrome(s, 0, len - 1));
}
