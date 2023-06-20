#include "main.h"
#include <stdio.h>

/**
* _abs - Check the absolute value of a number.
* @Z: the number to be computed for its absolute value
*  Return: Absolute value of a number Z
*/
int _abs(int Z)
	{
		if (Z < 0)
		{
		int absolutevalue;

		absolutevalue = Z * -1;
		return (absolutevalue);
		}
		return (Z);
	}

