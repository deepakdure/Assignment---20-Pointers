#include <stdio.h>
#include <string.h>
void rev(char *);
int main()
{
    char str[20];
    gets(str);
    rev(str);
}
void rev(char *str)
{
    printf("Reverse String is :- \n");
    puts(strrev(str));
}