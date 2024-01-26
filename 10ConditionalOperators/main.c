#include <stdio.h>

void main()
{
    int a, b;
    printf("Enter values: ");
    scanf("%d %d", &a, &b);
    a > b ? printf("a is big") : printf("a is not big");
}