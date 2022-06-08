#include "main.h"

/**
 * print_alphabet_x10 - print 10times the alphabeth, in lowecase.
 */
void print_alphabet_x10(void)
{
	int count;
	char l;

	for (count = 0; count <= 9; count++)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
	}
}
