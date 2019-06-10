#include <stdio.h>
#include <math.h>

//6
float func(float x)
{
	float f = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
	return f;
}
void main()
{
	float x = 5;
	float fx = func(x);
	printf("x=%f\r\n", x);
	printf("f(x)=%f\r\n", fx);
	printf("vvedite x:\t");
	scanf_s("%f", &x);
	fx = func(x);
	printf("f(x)=%f\r\n", fx);
	system("pause");
}