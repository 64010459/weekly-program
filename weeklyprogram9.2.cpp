#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int a, b, c, d, e, f, g, h, i, j, sum, avg;

int main() {
	printf("Please enter the height of student No.1(cm): ");
	scanf_s("%d", &a);
	printf("The height of student No.1 = %d cm\n", a);

	printf("Please enter the height of student No.2(cm): ");
	scanf_s("%d", &b);
	printf("The height of student No.2 = %d cm\n", b);

	printf("Please enter the height of student No.3(cm): ");
	scanf_s("%d", &c);
	printf("The height of student No.3 = %d cm\n", c);

	printf("Please enter the height of student No.4(cm): ");
	scanf_s("%d", &d);
	printf("The height of student No.4 = %d cm\n", d);

	printf("Please enter the height of student No.5(cm): ");
	scanf_s("%d", &e);
	printf("The height of student No.5 = %d cm\n", e);

	printf("Please enter the height of student No.6(cm): ");
	scanf_s("%d", &f);
	printf("The height of student No.6 = %d cm\n", f);

	printf("Please enter the height of student No.7(cm): ");
	scanf_s("%d", &g);
	printf("The height of student No.7 = %d cm\n", g);

	printf("Please enter the height of student No.8(cm): ");
	scanf_s("%d", &h);
	printf("The height of student No.8 = %d cm\n", h);

	printf("Please enter the height of student No.9(cm): ");
	scanf_s("%d", &i);
	printf("The height of student No.9 = %d cm\n", i);

	printf("Please enter the height of student No.10(cm): ");
	scanf_s("%d", &j);
	printf("The height of student No.10 = %d cm\n", j);

	sum = a + b + c + d + e + f + g + h + i + j;
	avg = sum / 10;
	printf("Average of the height = % d", avg);
}