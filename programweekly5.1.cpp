#include <stdio.h>
int n, i;
int main() {
	printf("Please enter a number: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {
		printf("*");
	}
	return 0;
}