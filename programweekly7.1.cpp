#include <stdio.h>
int n, i, j;
int main() {
	printf("Please enter a number: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
