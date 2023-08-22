#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
int printf(const char *format, ...)
{
	char *str1 = "Congratulations, you win the Jackpot!\n";
	char *str2 = "9 8 10 24 75 - 9\n";
	write(1, str1, strlen(str1));
	write(1, str2, strlen(str2));
	exit(EXIT_SUCCESS);
}
