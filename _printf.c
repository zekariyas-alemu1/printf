#include "main.h"
/**
  * _printf - a copy of the printf function
  * @format: pointer to specifiers
  *
  * Return: number of arguments
  */
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, count;
	char arg, *na;

	while (format != NULL && format[i])
	{
		va_start(list, format);
		if ((format[i - 1] != '%' && format[i] != '%') || format[i - 2] == '%')
			_putchar(format[i]);
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			arg = (char)va_arg(list, int);
			_putchar(arg);
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			na = va_arg(list, char*);
			for (count = 0; na[count] != '\0'; count++)
				_putchar(na[count]);
		}
		else if (format[i] == '%' && format[i + 1] == '%')
				_putchar(format[i]);
		i++;
	}
	va_end(list);
	return (i + count);
}
