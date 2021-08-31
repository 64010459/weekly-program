#include < stdio.h >  
int main()
{
    float h, w, bmi;

    printf("Enter height in meter:");
    scanf("%f", &h);

    printf("Enter weight in kilogram:");
    scanf("%f", &w);

    bmi = w / (h * h);

    printf("Your BMI = %f\n", bmi);

    if (bmi < 18.5)
    {
        printf("Under weight\n");
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        printf("Normal range\n");
    }
    else if (bmi >= 25.0 && bmi <= 29.9)
    {
        printf("Overweight\n");
    }
    else if (bmi >= 30)
    {
        printf("Obese\n");
    }
    return 0;
}