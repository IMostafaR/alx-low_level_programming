#include "main.h"

/**
 *wildcmp - compares two strings, allowing for wildcard characters
 *@s1: first string to compare
 *@s2: second string to compare, may contain wildcard character *
 *Return: 1 if the strings are identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they're identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If the current characters match, recurse with next characters */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* If the current character in s2 is a wildcard, check multiple cases */
	if (*s2 == '*')
	{
		/* Check if s2 can match an empty string */
		if (wildcmp(s1, s2 + 1))
			return (1);

		/* Check if s2 can match the rest of s1 */
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);
	}

	/* If none of the above cases apply, the strings aren't identical */
	return (0);
}

