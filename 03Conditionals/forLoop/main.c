#include <stdio.h>

int main()
{
    // int i;
    // for(i = 1; i <= 10; i++)
    // {
    //     printf("i: %d \n", i);
    // }
    // return 0;

    //sum of n no.
    int n, i, sum = 0;
    printf("Enter n values: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of first %d number is: %d", n, sum);
}