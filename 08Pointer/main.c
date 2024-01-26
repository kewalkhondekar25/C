#include <stdio.h>

struct Emp
{
    int eNo;
    char eName[20];
    float eSal;
};


void main()
{
    int i = 100;
    
    int *ptr;
    ptr = &i;

    printf("i value: %u \n", i);
    printf("value of ptr: %u \n", ptr);
    printf("address of i: %u \n", &i);
    printf("addresssof ptr: %u \n", &ptr);
    printf("value inside ptr: %u \n", *ptr);
    printf("%d \n", *(&i));

    //struct pointer value
    char* cp;
    int* ip;
    struct Emp* sep;

    printf("size of char * is: %d \n", sizeof(cp));
    printf("size of int * is: %d \n", sizeof(ip));
    printf("size of emp * is: %d \n", sizeof(sep));
}