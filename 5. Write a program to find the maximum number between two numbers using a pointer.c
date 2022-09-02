#include <stdio.h>
int main()
{
    int a, b;
    printf("enter 2 numbers\n");
    scanf("%d %d", &a, &b);
    int *x = &a;
    int *y = &b;
    printf("largest number is = %d", *x > *y ? *x : *y);
}