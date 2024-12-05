#include<stdio.h>

int main()

{
    //Declaring Variables;
    float x, y, z, result;
    printf("Enter First Number : ");
    scanf("%f", &x);
    printf("Enter second Number : ");
    scanf("%f", &y);
    printf("Enter second Number : ");
    scanf("%f", &z);
    //Giving input

    //Addition
    result = x + y + z;
    printf("%.2f + %.2f + %.2f = %.2f", x, y, z, result);

    //Substraction
    result = x - y - z;
    printf("\n%.2f - %.2f - %.2f = %.2f", x, y, z, result);

    //Multiplication
    result = x * y * z;
    printf("\n%.2f * %.2f * %.2f = %.2f", x, y, z, result);

    //Division
    result = x / y / z;
    printf("\n%.2f / %.2f / %.2f = %.2f", x, y, z, result);

    return 0;
}