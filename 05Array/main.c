#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    // reading
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    // printing
    for(int j = 0; j < 5; j++)
    {
        printf("%d \n", arr[j]);
    }
    // garbage value
    int arr2[5], a;
    for(a = 0; a < 5; a++)
    {
        printf("%d\n", arr2[a]);
    }
    // sum of values in array
    int arr3[5] = {1, 2, 3, 4, 5};
    int i, sum = 0;
    for(i = 0; i < 5; i++)
    {
        // 0 = 0 + 1
        // 1 = 1 + 2
        // 3 = 3 + 3
        // 6 = 6 + 4
        // 10 = 10 + 5
        // 15 = 15 + NA
        sum = sum + arr3[i];
    }
    printf("sum: %d", sum);
    return 0;
}