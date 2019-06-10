#include <math.h>
#include "head.h"
double summ(int n)
{
	double a = 0;
	double s = 0;
	int i = 0;
while (i < n - 1)
	{
		a = pow(-1, i) * (1 -(pow(i + 1, 2) / pow(i + 2, 2)));
		s += a;
		++i;
	}

	return s;
}