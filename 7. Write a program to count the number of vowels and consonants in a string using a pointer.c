#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("enter a string\n");
    gets(str);
    int i, j = 0, k = 0;
    for (i = 0; str[i]; i++)
    {
        if ((*(str + i) == 'a' || *(str + i) == 'e' || *(str + i) == 'i' || *(str + i) == 'o' || *(str + i) == 'u') || (*(str + i) == 'A' || *(str + i) == 'E' || *(str + i) == 'I' || *(str + i) == 'O' || *(str + i) == 'U'))
        {
            j++;
        }
        else if (*(str + i) == ' ')
            continue;
        else
            k++;
    }
    printf("%d\n", i);
    printf("Tatal numbers of vowel :- %d\n", j);
    printf("Tatal numbers of consonants :- %d", k);
    getch();
}
