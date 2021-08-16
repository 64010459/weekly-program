#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two integers you want to operate\n");
    scanf("%d %d", &a, &b);
    printf("Sum = ");
    printf("%d", a + b);
    printf("\nDifference = ");
    printf("%.d", a - b);
    printf("\nProduct = ");
    printf("%d", a * b);
    switch (b) {
    case 0:
        printf("\nQuotient = error");
        return 0;

    default:
        printf("\nQuotient = ");
        printf("%d", a / b);
        return 0;
    }
}
