#include <stdio.h>
int num;
int i;

int main() {
	printf("Please input number: ");
	scanf("%d", &num);

	while (i < num) {
		printf("*");
		i++;
	}
	return 0;
}
