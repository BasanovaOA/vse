#include "head.h"
_Bool insert(const char* src, const char* str, int index, char* dest, int len)
{
	int i = 0;
	int j = 0;
	if ((strlen(src) + strlen(str) + 1 > len) || (index < 0 || index > strlen(src) - 1))
		return 0;

	while (i < index)
	{
		dest[i] = src[i];
		i++;
	}
	while (str[j] != 0)
	{
		dest[i] = str[j];
		i++;
		j++;
	}
	j = index;
	while (src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return 1;
}
