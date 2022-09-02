#include <stdio.h>
#include <string.h>
int length(char *);
int main()
{
    char str[20];
    printf("enter a string = ");
    gets(str);
    printf("Lengthh of string is %d:- ", length(str));
}
int length(char *p)
{
    int i;
    while (*p != '\0')
    {
        i++;
        p++;
    }
    return i;
}