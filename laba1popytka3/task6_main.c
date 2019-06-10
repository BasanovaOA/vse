#include <stdlib.h> 
#include <stdio.h> 
#include <math.h> 
//6
extern float x, res;
extern void func();
void main()
{
	x = 5;
	func();
	printf("x=%f\r\n", x);
	printf("f(x)=%f\r\n", res);
	printf("vvedite x:\t");
	scanf_s("%f", &x);
	func();
	printf("f(x)=%f\r\n", res);
	system("pause");
}