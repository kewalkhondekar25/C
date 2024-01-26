#include <stdio.h>
#include <string.h>


int main()
{
    //name
    // char name[10];
    // printf("Enter your name: ");
    // scanf("%s", name);
    // printf("Hi!, %s", name);

    //eg2
    // int arr[5];
    // printf("enter 5 numbers: ");
    // for(int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // for(int j = 0; j < 5; j++)
    // {
    //     printf("numbers you entered are: %d \n", arr[j]);
    // }

    //gets
    // char name[20];
    // printf("enter your name: ");
    // //scanf("%s", name);
    // gets(name);
    // printf("Hi! %s", name);

    //strlen()
    // char str[30];
    // unsigned int len;
    // printf("Enter a string: ");
    // gets(str);
    // len = strlen(str);
    // printf("Length of '%s' is: '%d", str, len);

    //Manual string_Length
    // char str[30];
    // int len;
    // printf("Enter a string: ");
    // gets(str);
    // len = getStringLength(str);
    // printf("String Length of '%s'is: '%d'", str, len);

    return 0;
}

// int getStringLength(char x[])
// {
//     int i = 0, count = 0;
//     while(x[i] != '\0')
//     {
//         count++;
//         i++;
//     }
//     return count;
// }