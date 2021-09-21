#include <stdio.h>

 int num1, num2, num3;

int main() {

    printf("Please enter first number: ");
    scanf_s("%d", &num1);

    printf("Please enter second number: ");
    scanf_s("%d", &num2);

    printf("Please enter third number: ");
    scanf_s("%d", &num3);

    int max = num1;

    if (num2 >= max) {
        max = num2;
    }
    if (num3 >= max) {
        max = num3;
    }
 
    int min = num1;

    if (num2 <= min) {
        min = num2;
    }
    if (num3 <= min) {
        min = num3;
    }

    int med = num1;

    if (num2 < max && num2 > min) {
        med = num2;
    }
    if (num3 < max && num3 > min) {
        med = num3;
    }

    int g = max + med;

    printf("%d + %d = %d is Max", max, med, g);

    return 0;
}