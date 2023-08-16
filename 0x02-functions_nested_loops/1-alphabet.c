#include "main.h"

/**
 * print_alphabebet - a function that prints alphabets in lowercase
 *
 * Return: always 0;
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;

	}
	_putchar('\n');

}
