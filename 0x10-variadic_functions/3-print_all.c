#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: list of types of argument
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;
	char *separator = ", ";
	int n = strlen(format);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			char ch = va_arg(args, int);

			printf("%c", ch);
		}
		else if (format[i] == 'i')
		{
			int num = va_arg(args, int);

			printf("%d", num);
		}
		else if (format[i] == 'f')
		{
			float fl = va_arg(args, double);

			printf("%f", fl);
		}
		else if (format[i] == 's')
		{
			char *str = va_arg(args, char *);

			while (str == NULL)
			{
				printf("%s", "(nil)");
			}
			printf("%s", str);
		}
		if ((format[i] == 'i' || format[i] == 'c' || format [i] == 'f' || format[i] == 's') && (i < (n - 1) && separator != NULL))
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
