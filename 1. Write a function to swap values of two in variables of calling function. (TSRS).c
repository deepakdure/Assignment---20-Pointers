#include <stdio.h>
int swap(int *, int *);
int main()
{
    int a, b;
    printf("enter 2 numbers\n");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("after swapping\n");
    printf("a = %d\tb = %d", a, b);
    return 0;
}
int swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}