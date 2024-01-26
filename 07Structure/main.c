#include <stdio.h>

struct Emp
{
    int eNum;
    char eName[20];
    float eSal;

};

struct Emp2
{
    int eNum2;
    char eName2[20];
    float eSal2;
};


void main()
{
    struct Emp e;
    printf("Size of Emp: %d \n", sizeof(struct Emp));//data type
    printf("Size of Emp: %d \n", sizeof(struct Emp));//data type

    //initialize
    struct Emp2 e2 = {201, "John", 12000};
    printf("Details of Employee: \n");
    printf("enum: %d \n", e2.eNum2);
    printf("ename: %s \n", e2.eName2);
    printf("esal: %f", e2.eSal2);
    

}