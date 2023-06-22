#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that print anything
 * @format: list of types of arguments passed which are characters of string
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str;
	va_list args;
	char *sep = "";

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%i", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			i++;
			sep = ", ";
		}
		printf("\n");
		va_end(args);
	}
}
