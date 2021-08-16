#include<stdio.h>
int main()
{
    float a, b;
    int c;
    printf("Enter two numbers you want to operate\n");
    scanf("%f %f", &a, &b);
    printf("Sum = ");
    printf("%.2f", a + b);
    printf("\nDifference = ");
    printf("%.2f", a - b);
    printf("\nProduct = ");
    printf("%.2f", a * b);
    c = (int)a * (int)b;
    switch (c) {
    case 0:
        printf("\nQuotient = error");
        return 0;

    default:
        printf("\nQuotient = ");
        printf("%.2f", a / b);
        return 0;
    }
}
