#include <stdio.h>

int main()
{
    //factorial
    int i, n, fact;
    fact = 1;
    printf("Enter a numbeto get its factorial: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++ )
    {
        fact = fact * i;
    }
    printf("factorial of %d is: %d", n, fact);
    return 0;

    //sum of digits
    
}