#include <stdio.h>

int num1, num2, num3, num4;

int main() {

	printf("Please input first number: ");
	scanf("%d", &num1);

	printf("Please input second number: ");
	scanf("%d", &num2);

	printf("Please input third number: ");
	scanf("%d", &num3);

	printf("Please input fourth number: ");
	scanf("%d", &num4);

	int count = 0;

	switch (num1 % 2){
	case 0: count++;
	default: break;
	}

	switch (num2 % 2) {
	case 0: count++;
	default: break;
	}
	
	switch (num3 % 2) {
	case 0: count++;
	default: break;
	}

	switch (num4 % 2) {
	case 0: count++;
	default: break;
	}

	printf("Count: %d", count);

	return 0;

}