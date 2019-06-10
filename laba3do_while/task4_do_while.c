#include <math.h>
#include "head.h"
int findFirstElement(double eps)
{
	double f = 0;
	int ii;
	int n = 1;
	int i = 0;
	do
	{
		f = pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		ii = i;
		if (fabs(f) <= eps)
		{
			break;
		}
		else
		{
			++n;
		}
		++i;
	} while (i < n - 1);
	return ii;
}