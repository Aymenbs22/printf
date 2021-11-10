#include "main.h"
/**
 * _printf - function that produces output according to a format
 *@format: string
 * Return: count
 */
int _printf(char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0' && format)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
			count++;
		else
		{
			if (format[i + 1] == 'd' || format[i + 1] == 'i')
				count = count + print_int(va_arg(arg, int));
			else if (format[i + 1] == 'c')
				count = count + print_char(arg);
			else if (format[i + 1] == 's')
				count = count + print_string(va_arg(arg, char *));
			else if (format[i + 1] == '%')
				count = count + print_percent(arg);
			else if (format[i + 1] == '\0')
				return (-1);
			else if (format[i + 1] != '%')
			{
				_putchar('%');
				_putchar(format[i + 1]);
				count = count + 2;
			}
			i = i + 2;
		}
	}
	va_end(arg);
	return (count);
}
