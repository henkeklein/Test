#include <stdio.h>
#include <stdlib.h>
int main()
{
    int first, second, add, diff, mult;
    float division;
    char name;
    printf("Enter two integers\n");
    printf("Enter your name\n");
    scanf("%d%d", &first, &second);
    scanf("%d", &name);
    add = first+second;
    diff = first-second;
    mult = first * second;
    division = first / (float)second;

    printf("Summan = %d\n", add);
    printf("Difference = %d\n", diff);
    printf("Multiplication = &d\n", mult);
    printf("Division = %.2f\n", division);
    printf(name);
    return 0;
}


