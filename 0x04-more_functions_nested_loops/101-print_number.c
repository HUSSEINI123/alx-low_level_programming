#include "main.h"

/**
 * print _number - prints number using _putchar
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchat('-');
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
