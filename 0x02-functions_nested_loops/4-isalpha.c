#include "main'h"
/**
 *_isalpha - checks for alphabets
 *@ac: character to be checked
 *
 *Return: 1 if character is a letter, 0 otherwise
 */
int _isalphat(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
