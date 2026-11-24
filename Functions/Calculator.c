#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mult(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int main()
{
    int a, b, choice;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Press the desired output:");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("%d", sum(a, b));
        break;
    case 2:
        printf("%d", sub(a, b));
        break;
    case 3:
        printf("%d", mult(a, b));
        break;
    case 4:
        printf("%d", div(a, b));
        break;
    default:
        printf("Choose from the given options.");
    }
}