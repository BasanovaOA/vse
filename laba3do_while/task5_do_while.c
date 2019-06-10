#include <stdio.h>
#include <math.h>
#include "head.h"
int findFirstNegativeElement(double eps)
{
	float f = 0;
	int ii;
	int n = 1;
	int i = 0;
	do
	{
		f = pow(-1, i) * (1 - (pow(i + 1, 2) / pow(i + 2, 2)));
		ii = i;
		if (fabs(f) <= eps && f < 0)
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