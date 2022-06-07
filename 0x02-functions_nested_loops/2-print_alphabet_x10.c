/*
 *  File: 2-print_alphabet_x10.c
 */

#include "main.h"

/**
 * print_alphabet_x10 - print 10times the alphabeth, in lowercase.
 */
void print_alphabeth_x10(void);
{
	int count;
	char l;

	for (count = 0; count <= 9; count++)
	{
		for (1 = 'a' ; l <= 'z' ; l++)
			_putchar(l);
		_putchar('\n');
	}
}
