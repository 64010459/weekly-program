#include <stdio.h>
int n, i, j;
int main()
{
    printf("Please enter number: ");
    scanf_s("%d", &n);

    while (i < n) {
        while (j <= i) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}