#include "main.h"

/**
 * get_endianness -  determines endianness
 * Return: Integer
 */
int get_endianness()
{
	unsigned int n = 1;
	unsigned char *ptr = (unsigned char *)&n;

	return ((int)(*ptr));
}
