#include <stdio.h>
#include <stdlib.h>

struct Emp
{
    int empNum;
    char empName[20];
    float empSal;
};

void main()
{
    struct Emp* ptr;
    ptr = (struct Emp*) malloc(sizeof(struct Emp));
    if(ptr == NULL)
    {
        printf("out of memory");
    }
    else
    {
        printf("Enter Emp details: ");
        scanf("%d %s %f", &ptr->empNum, ptr->empName, &ptr->empSal);
        printf("%d %s %f \n", ptr->empNum, ptr->empName, ptr->empSal);
        printf("%d %s %f \n", &ptr->empNum, &ptr->empName, &ptr->empSal);
        //printf("%d %s %f", sizeof(&ptr->empNum), sizeof(ptr->empName), sizeof(&ptr->empSal));

    }

}
