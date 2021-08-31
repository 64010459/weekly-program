#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Please enter first number: ");
    scanf("%d", &a);

    printf("Please enter second number: ");
    scanf("%d", &b);

    printf("Please enter third number: ");
    scanf("%d", &c);

    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    printf("Min value = %d", min);

    return 0;
}