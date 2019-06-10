#include <math.h>
#include "head.h"
double summ2(double eps)
{
	double a = 0;
	double s = 0;
	int i = 0;

	do
	{
		a = pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		if (fabs(a) <= eps)
		{
			return s;
		}
		s += a;
		++i;
	} while (1);
}