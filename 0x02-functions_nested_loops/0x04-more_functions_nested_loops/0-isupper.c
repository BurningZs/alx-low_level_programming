#include "main.h"

/**
 * _isupper - Check if a letter is an uppercase
 * @x: The number to be checked
 * Return: 1 for uppercase and 0 for anything else
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
	return (1);
	}
	return (0);
}
