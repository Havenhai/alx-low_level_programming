#include "main.h"

/**
 * _isalpha - Checks for lowercase character
 * @T: The character to be checked
 * Return: 1 for lowercase alpahbet or 0 for otherwise
 */

int _isalpha(int T)

	{
		if ((T >= 65 && T <= 97) || (T >= 97 && T <= 122))
		{
		return (1);
		}
		return (0);
	}
