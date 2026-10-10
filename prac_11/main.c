#include <stdio.h>
#include "calc.h"

int main(void)
{
    double a, b;

    printf("Enter two numbers: ");

    if (scanf("%lf %lf", &a, &b) != 2)
    {
        fprintf(stderr, "Error: enter two numbers.\n");
        return 1;
    }

    printf("add: %.2f\n", add(a, b));
    printf("subtract: %.2f\n", subtract(a, b));
    printf("multiply: %.2f\n", multiply(a, b));

    if (b == 0.0)
    {
        printf("divide: cannot divide by zero.\n");
    }
    else
    {
        printf("divide: %.2f\n", divide(a, b));
    }

    return 0;
}
