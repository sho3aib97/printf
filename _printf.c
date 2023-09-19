#include "main.h"
int _printf(char *format, ...)
{
	int count = 0, i = 0, fold;
	char *str;
	va_list arg;

	va_start(arg, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			printc(format[i]);
			count++;
		}
		else
		{
			switch (format[i + 1])
			{
				case 'c':
					printc(va_arg(arg, int));
					count++;
				break;
				case 's':
					str = va_arg(arg, char *);
					prints(str);
					count += _strlen(str);
					break;
				case 'i':
				case 'd':
					fold = va_arg(arg, int);
					str = malloc(sizeof(char) * (numc(fold) + 1));
					sprintf(str, "%d", fold);
					prints(str);
					free(str);
					count += numc(fold);
				break;
				default:
					printp(format[i + 1]);
					count++;
			}
			i++;
		}
	}
	va_end(arg);
	return (count);
}
