#include "main.h"
/**
 * Print_alphabet_x10 - prints  alpha 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char ls;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}
