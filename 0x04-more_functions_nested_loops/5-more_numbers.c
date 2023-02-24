<<<<<<< HEAD
#include "main.h"

/**
*print_numbers - print 0123456789
* owned by Favoredspecial
* Return: void
*/

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
=======
#include "main.h"

/**
 * more_numbers - nmbr fct
 * Favoredspecial file
 * Return: no return
 */

void more_numbers(void)
{

int i, j;
	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			_putchar('1');
			_putchar(j % 10 + '0');
		}
			_putchar('\n');
		}
}
>>>>>>> 38c9bfd1db88787f53e83dde6761d27860a80b25
