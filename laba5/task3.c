#include "head.h"
void delete(const char* str, const char* substr)
{
	int i = 0;
	int j;
	int substr_length = strlen(substr);
	char* index = find(str, substr);
	if (index == NULL)
		return;
	int f = 1;
	for (int i = 0; i < f; ++i)
	{
		++f;
		index[i] = index[substr_length + i];
		if (index[substr_length + i] == 0)
			break;
	}
	for (j = 1; j < substr_length; j++)
	{
		index[i + j] = 0;
	}
}