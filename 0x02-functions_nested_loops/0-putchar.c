#include <stdio.h>
#include "main.h"

/**
 *main -  Printing a  word  follwed  by  a new  line.

 * Return: Always 0.
 */
int main(void)
{
	char s[] = "_putchar.\n";
	print_until_newline(s);
	puts("\n");


	return (0);
}
void print_until_newline(char *s)
{
	int i = 0;
	while (s[i] != '/n' &&  s[i] != '/0')
	{
		putchar (s[i];
		i++;
	}

}
