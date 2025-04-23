#include<stdio.h>
int main()
{
    float a, b;
    printf("Enter two numbers you want to operate\n");
    scanf("%f %f", &a, &b);
    printf("Sum =");
    printf("%.2f", a + b);
    printf("\nDifference = ");
    printf("%.2f", a - b);
    printf("\nProduct = ");
    printf("%.2f", a * b);
    if (b == 0)
    {
        printf("\nQuotient = error");
    }
    else
    {
        printf("\nQuotient = ");
        printf("%.2f", a / b);
    }
    return 0;
}
