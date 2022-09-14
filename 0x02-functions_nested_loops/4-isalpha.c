#include "main.h"

/**
 * _isalpha -checks the alphabetical letters
 * @c: a character to be checke on
 * Return: returns 0 or 1 depending on condition
 */
int _ialpha(int c)
{
	return ((c > 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
