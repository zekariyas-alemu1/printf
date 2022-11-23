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
	char *na, arg;

	while (format != NULL && format[i])
	{
		va_start(list, format);
		while(format[i] != '\0')
		{
			if (format [i - 1] == '%')
				switch (format[i])
				{
					case 'c':
						arg = va_arg(list, int);
						_putchar(arg);
						break;
					case 's':
						na = va_arg(list, char*);
						if (na == NULL)
							na = "(null)";
						for(count = 0; na[count] != '\0'; count++)
							_putchar(na[count]);
						break;
					case '%':
						_putchar(37);
						break;
					default:
						_putchar(format[i]);
				}
			else if (format[i] != '%')
				_putchar(format[i]);
			i++;
		}
	}
	va_end(list);
	return (i + count);
}
