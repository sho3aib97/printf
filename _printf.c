#include "main.h"

/**
 * _printf - print a formatted string
 * @format: array of string
 * Return: integer value of count if fail -1
*/

int _printf(const char *format, ...)
{
	int count = 0, i = 0, fold;
       long unsigned int len;
	char ch, *str;
	va_list arg;

	va_start(arg, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			printc(format[i]);
			count++;
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			ch = va_arg(arg, int);
			printc(ch);
			count++;
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			str = va_arg(arg, char *);
			prints(str);
			for (len = 0; len < strlen(str); len++)
			count++;
			i++;
		}
		else if (format[i] == '%' && format[i - 1] == '%')
		{
			printc('%');
			count++;
		}
		else if (format[i] == '%' && (format[i + 1] == 'i' || format[i + 1] == 'd'))
		{
			fold = va_arg(arg, int);
			len = numc(fold);
			str = malloc(sizeof(char) * (len + 1));
			sprintf(str, "%d", fold);
			prints(str);
			free(str);
			while (len--)
				count++;
			i++;
		}
	}
	va_end(arg);
	return (count);
}
