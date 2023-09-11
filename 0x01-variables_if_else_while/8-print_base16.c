#include <stdio.h>

/**
 * main - prints the numbers between 0 to 9 and letters between a to f.
 * 
 * Return: Always 0 (Sucess)
 */
int main(void)
{
        char C;

	int d;

	C = 'a';
	d = 0;
	while 
		(d < 10){
			putchar(d + '0');
			d++;
		}
	while
		(C <= 'f') {
		putchar(C);
		C++;
	}
	putchar('\n');
        return (0);
}
