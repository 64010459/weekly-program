#include <stdio.h>
int num1, num2, num3;

int main() {
	printf("Please enter first number: ");
    scanf("%d", &num1);

	printf("Please enter second number: ");
	scanf("%d", &num2);

	printf("Please enter third number: ");
	scanf("%d", &num3);

	int num1_2 = num1 + num2, num1_3 = num1 + num3, num2_3 = num2 + num3;

	if (num1_2 >= num1_3 && num1_2 >= num2_3) {
		printf("%d + %d = %d is Max", num1, num2, num1_2);
	}
	if (num1_3 >= num1_2 && num1_3 >= num2_3) {
		printf("%d + %d = %d is Max", num1, num3, num1_3);
	}
	if (num2_3 >= num1_2 && num2_3 >= num1_3) {
		printf("%d + %d = %d is Max", num2, num3, num2_3);
	}
	return 0;
}