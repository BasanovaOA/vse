#include "head.h"
void strcat(char* dest, int len, const char* first, const char* second)
{
	int i = 0;
	int first_length = strlen(first);
	for (i = 0; i < len - 1; i++)
	{
		if (i < first_length)
			dest[i] = first[i];
		else
		{
			dest[i] = second[i - first_length];
			if (second[i - first_length] == 0)
				return;
		}
	}
	dest[i] = 0;
}
