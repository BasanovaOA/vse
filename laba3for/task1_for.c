#include <math.h>
#include "head.h"
double summ(int n)
{
	double a = 0;
	double s = 0;

	for (int i = 0; i < n - 1; ++i)
	{
		a = pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		s += a;
	}

	return s;
}