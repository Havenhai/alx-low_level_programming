#include "main.h"

int check(char *h, int y, int length);
int palindrome(char *h);

/**
 * is_palindrome - checks if a string is a palindrome
 * @h: string to reverse
 * An empty string is a palindrome
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *h)
{
	if (*h == 0)
		return (1);
	return (check(h, 0, palindrome(h)));
}

/**
 * palindrome - returns the length of a string
 * @h: string to calculate the length of
 * Return: length of the string
 */

int palindrome(char *h)
{
	if (*h == '\0')
		return (0);
	return (1 + palindrome(h + 1));
}

/**
 * check - checks the characters recursively for palindrome
 * @h: string to check
 * @y: iterator
 * @length: length of the string
 * Return: 1 if palindrome, 0 if not
 */

int check(char *h, int y, int length)
{
	if (*(h + y) != *(h + length - 1))
		return (0);
	if (y >= length)
		return (1);
	return (check(h, y + 1, length - 1));
}
