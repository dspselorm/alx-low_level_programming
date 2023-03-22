#include "main.h"

/**
 * _isalpha - Check if c is an alphabet or otherwise
 *
 * Return:  1 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
