#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @T: The character to be checked
 * Return: 1 for lowercase alpahbet or 0 for otherwise
 */

int _islower(int T)

	{
		if (T >= 97 && T <= 122)
		{
		return (1);
		}
		return (0);
	}
