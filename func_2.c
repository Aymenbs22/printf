#include "main.h"
/**
 *print_percent - print percent
 *@arg: argument of type of va_list
 * Return: integer
 */
int print_percent(va_list arg)
{
	(void)arg;

	_putchar('%');
	return (1);
}
/**
 *to_binary - convert unsigned int to binary
 *@value: input
 * Return: binary
 */
unsigned int to_binary(unsigned int value)
{
    if (value == 0)
        return 0;
    else
        return (value % 2 + 10 * to_binary(value / 2));
}
/**
 *print_unsint - function that print an unsigned int
 *@n: intput
 *Return: length of print caractere
 */
unsigned int print_unsint(unsigned int n)
{
	unsigned int x;
	unsigned int i = 0;
	unsigned int d = 1;
	x = n;
	while ((x / d) > 9)
		d = d * 10;
	while (d > 0)
	{
	_putchar(x / d + '0');
		x = x % d;
		d = d / 10;
		i++;
	}
	return (i);
}
