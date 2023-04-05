#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: input string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: input string
 * Return: 1 if string is a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - checks if a string is a palindrome
 * @s: input string
 * @start: start index of the string
 * @end: end index of the string
 * Return: 1 if string is a palindrome, 0 if not
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] == s[end])
		return (check_palindrome(s, start + 1, end - 1));
	else
		return (0);
}
