#include "main.h"
/**
 *
 *
 *
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 != *s2)
	{
		return 0;
	}
	wildcmp(s1 + 1, s2 + 1);
	return 1;
}
