#include <stdio.h>

int main()
{
    // short int i = 1;
    // while(1)
    // {
    //     printf("i: %d \n", i);
    //     i++;
    // }

    // short int i = 1;
    // while(i)
    // {
    //     printf("i: %d \n", i);
    //     i++;
    // }

    // signed char ch = 120; // -128 to 127
    // while(ch++)
    // {
    //     printf("%d /t", ch);
    // }

    // int i = 1;
    // while(i<=10)
    // {
    //     printf("%d \n", i);
    //     i++;
    // }

    // int i = 1;
    // while(i<=10)
    // {
    //     printf("%d \n", i++);
    //     //i++;
    // }

    // int i = 1;
    // while(i<=10)
    // {
    //     printf("%d \n", ++i);
    //     //i++;
    // }

    //even no.
    int i = 1;
    while(i <= 10)
    {
        if(i%2 == 0)
        {
            printf(" %d \n", i);
        }
        ++i;
    }

    return 0;
    
}