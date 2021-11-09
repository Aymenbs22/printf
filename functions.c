#include "main.h"
/**
 *print_int - function that print an int
 *x: int
 *@n: int
 *Return: i
 */
int print_int(int n)
{
	unsigned int x;
	int i = 0;
	int d = 1;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		i++;
	}
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
/**
 *print_char - function that print an charactere
 *@ch: char
 *Return: char
 */
int print_char(va_list arg)
{
		_putchar(va_arg(arg, int));
			return (1);
}
/**
 *print_string - function tthat print an sttring
 *@ch: string
 *Return: string
 */
int print_string(char *ch)
{
int i = 0;
while (ch[i] != '\0')
{
_putchar(ch[i]);
i++;
}
return (i);
}
