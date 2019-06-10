#include <stdio.h>
#include <math.h>

//6
void main()
{
	float x = 5;
	float ff = f5(x);
	printf("x=%f\r\n", x);
	printf("f(x)=%f\r\n", ff);
	printf("vvedite x:\t");
	scanf_s("%f", &x);
	ff = f5(x);
	printf("f(x)=%f\r\n", ff);
	system("pause");
}