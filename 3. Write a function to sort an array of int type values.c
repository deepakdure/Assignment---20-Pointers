#include <stdio.h>
void sort(int *p, int size)
{
    int i, j, t;
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (*(p + i) > p[j])
            {
                t = p[i]; // p[i] = *(p+i);
                p[i] = p[j];
                *(p + j) = t;
            }
        }
    }
    printf("\nafter sorting array is :- ");
    for (i = 0; i < size; i++)
        printf("%d ", p[i]);
}
int main()
{
    int array[] = {10, 22, 32, 45, 332, 98, 74, 76, 987, 36}, i;
    printf("array is :-               ");
    for (i = 0; i < 10; i++)
        printf("%d ", array[i]);
    sort(array, 10);
}