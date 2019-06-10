#include <stdio.h>
#include <math.h>

//6
void main()
{
	float x = 5;
	float fx= cos(x)+cos(2*x)+cos(6*x)+cos(7*x);
	printf("x=%f\r\n", x);
	printf("f(x)=%f\r\n", fx);
	printf("vvod x:\t");
	scanf_s("%f", &x);
	fx = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
	printf("f(x)=%f\r\n", fx);
	system("pause");
}