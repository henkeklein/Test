#include <stdio.h>
#include <stdlib.h>
int total = 0;
int sum(int, int);
int main()
{
    printf("This is a C program\n");
    total = sum(5, 5);
    printf("Sum of two numbers: %d\n", total);
    return 0;
}
int sum(int a, int b)
{
    return a+b;
}

