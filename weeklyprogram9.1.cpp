#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int avg, n, i, a[100];

int main() {
	for (i = 1; i < 11; i++) {
		printf("Please enter the height of student No.%d(cm): ", i);
		scanf_s("%d", &a[i]);
		printf("The height of student No.%d = %d cm\n", i, a[i]);
		n = n + a[i];
	}
	avg = n / 10;
	printf("Average of the height = % d", avg);
	return 0;
}