#include <math.h>
#include "head.h"
int findFirstNegativeElement(double eps)
{
	double a = 0;
	int i = 0;

	while (1)
	{
		a = pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));

		if ((a < 0) && (fabs(a) <= eps))
		{
			return i + 1;
		}

		++i;
	}
}