#include <stdio.h>
int main()
{
    int x[5], i, y;
    printf("enter 5 numbers\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &x[i]);
    printf("Reverse array is :- \n");
    for (i = 4; i >= 0; i--)
    {
        printf("%d ", *(x + i));
    }
}