#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @zz: the character to be checked
 * Return: 1 if zz is a letter, 0 otherwise
 */
int _isalpha(int zz)
{
	return ((zz >= 'a' && zz <= 'z') || (zz >= 'A' && zz <= 'Z'));
}
