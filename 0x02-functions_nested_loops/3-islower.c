#include "main.h"

/*
 * print_alphabet - print lowercase
 * Description: prints lowercase when called.
 * Return: Always 0
 */
void print_alphabet(void)
{
	char C;
	for (C >= 97 && C <= 122)
	{
		_putchar (C);
	}
	_putchar(' \n ')
}
