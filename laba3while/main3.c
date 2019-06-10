#include <stdio.h>
#include "head.h"
int main(void)
{
	int n;
	int k;
	int ir;
	double eps;
	double sum;

	do
	{
		system("cls");
		printf("1 - Task1\n2 - Task2\n3 - Task3\n4 - Task4\n5 - Task5\n6 - Exit\r\n");
		char answer = _getch();
		system("cls");
		switch (answer)
		{
		case '1':
			printf("\nEnter n:\n");
			scanf_s("%i", &n);
			printf("\n");
			sum = summ(n);
			printf("%lf\n", sum);
			break;
		case '2':
			printf("\nEnter eps:\n");
			scanf_s("%lf", &eps);
			printf("\n");
			sum = summ2(eps);
			printf("%lf\n", sum);
			break;
		case '3':
			printf("\nEnter n:\n");
			scanf_s("%i", &n);
			printf("\nEnter k:\n");
			scanf_s("%i", &k);
			printf("\n");
			print(n, k);
			break;
		case '4':
			printf("\nEnter eps:\n");
			scanf_s("%lf", &eps);
			printf("\n");
			ir = findFirstElement(eps);
			printf("%i\n", ir);
			break;
		case '5':
			printf("\nEnter eps:\n");
			scanf_s("%lf", &eps);
			printf("\n");
			ir = findFirstNegativeElement(eps);
			printf("%i\n", ir);
			break;
		case '6':
			return 0;
			break;
		default:
			printf("Invalid input\n");
			break;
		}

		system("pause");

	} while (1);
	return 0;
}