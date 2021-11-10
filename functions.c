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
<<<<<<< HEAD
 *print_char - function that print an character
=======
 *print_char - function that print an charactere
 *@arg: argument
>>>>>>> 7b893142ecf1b4b886b0a808c85270aa6cfd4210
 *Return: char
 *@arg: argument
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

if (ch == NULL)
	ch = "(null)";
while (ch[i] != '\0')
{
_putchar(ch[i]);
i++;
}
return (i);
}
