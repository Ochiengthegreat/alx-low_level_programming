#include "main.h"

/**
 * _strlen_recursion - to get the string length
 *
 * @s: the string
 *
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
 * cmp_string - compare every string character
 *
 * @s: the string
 *
 * @left: smallest iterator
 * @right: largest iterator
 *
 * Return: integer
 */

int cmp_string(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + cmp_string(s, left + 1, right - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string
 * Return: 1 if it is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (cmp_string(s, 0, _strlen_recursion(s) - 1));
}
