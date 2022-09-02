void swap(char **x, char **y)
{
    char *s = *x;
    *x = *y;
    *y = s;
}
#include <stdio.h>
int main()
{
    char *str[20];
    char *st[20];
    printf("enter 2 strings\n");
    scanf("%s", str);
    scanf("%s", st);
    swap((char **)&str, (char **)&st);
    printf("after swapping new string is :-\n");
    printf("%s\n%s", str, st);
}