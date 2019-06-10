#include <stdio.h>
#include <math.h>

void f();
double x, result;

int main()
{
	scanf("%lf", &x);
	f();

	printf("x = %.4f\n", x);
	printf("result = %.4f\n", result);

	system("pause");
	return 0;
}

void f()
{
	result = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
}