#include <stdio.h>
#include <math.h>
#include "head.h"
void print(int n, int k)
{
	double a = 0;
	int l = 0;
	for (int i = 0; ; ++i)
	{
		a = pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));

		l += 1;
		if (l == k)
		{
			l = 0;
			continue;
		}
		printf("%.4f\n", a);
		n = n - 1;
		if (n == 0)
			break;
	}
}