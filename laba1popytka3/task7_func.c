#include <math.h>
#include "func.h"
extern double x, result;
extern void f() 
{
	result = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);

	;
}