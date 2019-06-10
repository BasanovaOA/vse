void strcpy(char* dest, int len, const char* src)
{
	int i = 0;

	for (i = 0; i < len - 1; i++)
	{
		dest[i] = src[i];
		if (src[i] == 0)
			return;
	}
	dest[i] = 0;
}
