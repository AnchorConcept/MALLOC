#include "main.h"
#include <unistdh

/**
 * _putchar - writes the character c o stdout
 * @c: the character to print
 *
 * Return: On success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
