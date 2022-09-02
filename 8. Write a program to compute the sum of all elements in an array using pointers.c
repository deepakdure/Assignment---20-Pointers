#include <stdio.h>
int main()
{
    int arr[5], i, sum = 0;
    printf("enter 5 numbers\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < 5; i++)
    {
        sum = sum + *arr + i;
    }
    printf("Sum of all elements in array = %d", sum);
}