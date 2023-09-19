#include "main.h"
int _printf(char *format, ...)
{
	int count = 0, i = 0, fold;
<<<<<<< HEAD
       long unsigned int len;
	char ch, *str;
=======
	char *str;
>>>>>>> 69e0262562f309bd1645efde1151ca7a96414d4f
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
<<<<<<< HEAD
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
=======
>>>>>>> 69e0262562f309bd1645efde1151ca7a96414d4f
	}
	va_end(arg);
	return (count);
}
