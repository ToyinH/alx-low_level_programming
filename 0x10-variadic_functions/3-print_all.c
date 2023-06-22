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
	char *sep = "";

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			char ch = va_arg(args, int);

			printf("%s%c", sep, ch);
		}
		else if (format[i] == 'i')
		{
			int num = va_arg(args, int);

			printf("%s%d", sep, num);
		}
		else if (format[i] == 'f')
		{
			float fl = va_arg(args, double);

			printf("%s%f", sep, fl);
		}
		else if (format[i] == 's')
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
			{
				printf("%s%s", sep, "(nil)");
			}
			printf("%s%s", sep, str);
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
