#include "main.h"  
/**
 * islower -  function to check for lowercase character
 * @c: is the int that will use for the argument of the funtion
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
