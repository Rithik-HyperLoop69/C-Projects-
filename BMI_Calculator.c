#include <stdio.h>

void showHealthMeter(float bmi)
{
    int filled;
    filled = (int)((bmi / 40.0) * 30);

    if (filled > 30)
        filled = 30;
    if (filled < 0)
        filled = 0;

    printf("\nHealth Meter\n[");

    for (int i = 0; i < 30; i++)
    {
        if (i < filled)
            printf("#");
        else
            printf("-");
    }

    printf("]\n");
    printf("BMI: %.2f\n", bmi);

    if (bmi < 18.5)
        printf("Category: Underweight\n");
    else if (bmi < 25)
        printf("Category: Normal Weight\n");
    else if (bmi < 30)
        printf("Category: Overweight\n");
    else
        printf("Category: Obese\n");
}

int main()
{
    float weight, height, bmi;
    char again;

    printf("=================================\n");
    printf("      BMI HEALTH CALCULATOR\n");
    printf("=================================\n");

    do
    {
        printf("\nEnter Weight (kg): ");
        scanf("%f", &weight);

        printf("Enter Height (m): ");
        scanf("%f", &height);

        bmi = weight / (height * height);

        printf("\n=================================\n");
        showHealthMeter(bmi);
        printf("=================================\n");

        printf("\nCalculate Again? (Y/N): ");
        scanf(" %c", &again);

    } while (again == 'Y' || again == 'y');

    printf("\nThank you for using BMI Calculator!\n");

    return 0;
}